module Jekyll
	class SidebarTag < Liquid::Tag
		def initialize(name, data, tokens)
			data = data.split(",")

			i = 0
			for d in data
				if i == 0
					@id = d.tr('"','')
				else
					@name = d.tr('"','')
				end

				i = i+1
			end

			@text = "<li><a data-target=\"#{@id}\" onclick=\"sidebarClick(this)\">#{@name}</a></li>"
		end

		def render(context)
			@text
		end
	end
end

Liquid::Template.register_tag('sidebar', Jekyll::SidebarTag)