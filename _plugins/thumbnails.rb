# Adapted from: https://github.com/redwallhp/JekyllGalleryTag/blob/master/galleries.rb

require "RMagick"

module Jekyll
	class ThumbnailTag < Liquid::Tag
		def initialize(name, data, tokens)
			@img = data
			@imgThumbnail = @img;
		end

		def render(context)
			"<a href=\"#{@img}\" class=\"thumbnail\" target=\"_blank\"><img src=\"#{@imgThumbnail}\" /></a>"
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