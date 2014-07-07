$(function() {
	$('.sidebar-content').hide();
	sidebarClick($('ul.nav-stacked li:first-child a'));
});

function sidebarClick(e) {
	$('.sidebar-content').hide();
	$('ul.nav-stacked li').removeClass('active');
	$('#' + $(e).data('target')).show();
	$(e).parent().addClass('active');
}