# Adapted from: https://github.com/redwallhp/JekyllGalleryTag/blob/master/galleries.rb

require "RMagick"

module Jekyll
	class ThumbnailTag < Liquid::Tag
		def initialize(name, data, tokens)
			data.strip!

			unless data[0] == "/"
				data.prepend("/")
			end

			unless data.rindex("/images") === 1 
				data.prepend("/images")
			end

			@img = data
			@imgThumbnail = data.sub(File.extname(data), "-thumb#{File.extname(data)}");
		end

		def render(context)
			"<a href=\"#{@img}\" class=\"thumbnail\" style=\"max-width:370px\" target=\"_blank\"><img src=\"#{@imgThumbnail}\" /></a>"
		end
	end

	class ThumbGenerator < Generator
		def generate(site)
			@from  = File.expand_path("images")
			@to = File.expand_path(File.join(site.dest, "images"))

			# need to loop each project
			site.collections['projects'].docs.each do |project|
				if project.data['home']
					@gallery_dir = "#{@from}/#{project.data['project']}"
					@gallery_dest = "#{@to}/#{project.data['project']}"
					@static_dir = "images/#{project.data['project']}"
					thumbify(files_to_resize(site))
				end
			end
		end

		def files_to_resize(site)
			to_resize = []

			Dir.glob(File.join(@gallery_dir, "**", "*.{png,jpg,jpeg,gif}")).each do |file|
				puts file
				if !File.basename(file).include? "-thumb"
					name = File.basename(file).sub(File.extname(file), "-thumb#{File.extname(file)}")
					thumbname = File.join(@gallery_dest, name)
					# Keep the thumb files from being cleaned by Jekyll
					# site.static_files << Jekyll::StaticFile.new(site, site.dest, @static_dir, name )
					if !File.exists?(thumbname)
						to_resize.push({ "file" => file, "thumbname" => thumbname })
					end
				end
			end

			return to_resize
		end

		def thumbify(items)
			if items.count > 0
				items.each do |item|
					img = Magick::Image.read(item['file']).first
					thumb = img.resize_to_fit!(360)
					thumb.write(item['thumbname'])
					thumb.destroy!
				end
			end
		end
	end
end

Liquid::Template.register_tag('thumbnail', Jekyll::ThumbnailTag)