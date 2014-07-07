turbo-hipster
=============

# Running the site for devlopment (Windows)

Install VirtualBox and Vagrant. Then from git project folder:

	vagrant up
	vagrant ssh
	cd /vagrant
	jekyll serve -w

# Running the site for development (Linux and OS X)
Make sure ruby and nodejs is installed. Then from the git project folder, do:

	gem install jekyll
	bundle install

then:

	jekyll serve -w

# Adding a New Project


# Setting Up the Production Server

# Helpful Commands

To check status in github powershell:

	git status -s

To update:

	git pull

To make changes:

	git status -s
	git add filename				// Variations for making changes
	git commit -m "comment here"	//
	git push

Shortcut for updating old files:

	Replace above variation // with
	git commit -a -m "comment here"

Shortcut for adding all files in a folder:

	Replace above variation // with
	git add foldername/*
	git commit -m "comment here"
	
	example:
	git add images/pipettebot/*
	git commit -m "Adds all files in local repository in images/pipettebot/ to main branch online"


# Enabling a Sidebar for a page

	Page Name
	=========

	<div class="col-sm-4">
		<ul class="nav nav-pills nav-stacked">
			{% sidebar "content1", "Content 1" %}

			{% sidebar "content2", "Content 2" %}

			{% sidebar "content3", "Content 3" %}
		</ul>
	</div>


	<div id="content1" class="sidebar-content col-sm-8">
		<h1>Content 1</h1>
		<p>text</p>
	</div>

	<div id="content2" class="sidebar-content col-sm-8">
		<h1>Content 2</h1>
		<p>text2</p>
	</div>

	<div id="content3" class="sidebar-content col-sm-8">
		<h1>Content 3</h1>
		<p>text3</p>
	</div>

# Using Git GUI

Use the folder where the repository is held from github

	Click rescan button to check if any new changes have been made
	Click files you want to change in the unstaged changes section and press stage changed button
	Then after selecting all desired files press commit button
	Then press push button to make changes to the main repository

# References
- Boostrap: http://getbootstrap.com/
- Vagrant / Jekyll: https://coderwall.com/p/xrfadg
- Jekyll documentation: http://jekyllrb.com/
- Markdown Syntax: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet