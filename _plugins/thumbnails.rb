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
			@imgThumbnail = @img;
		end

		def render(context)
			"<a href=\"#{@img}\" class=\"thumbnail\" style=\"max-width:370px\" target=\"_blank\"><img src=\"#{@imgThumbnail}\" /></a>"
		end
	end

	# class ThumbnailFile < StaticFile
	# 	def write(dest)
	# 		begin
	# 			super(dest)
	# 		rescue
	# 		end
	# 		true
	# 	end
	# end

	# class ThumbGenerator < Generator
		
	# end
end

Liquid::Template.register_tag('thumbnail', Jekyll::ThumbnailTag)