# f90tohtml
perl utility to convert fortran source files into a hyperlinked web site. Written by Dr. Brian Fiedler (http://12characters.net/f90tohtml.html)

Description (copied from https://code.google.com/archive/p/f90tohtml/):

NEW: updated for WRFV3 on April 30, 2009

A new home for f90tohtml
f90tohtml has been around for a decade, but, as of 10 July 2008, is new here at code.google.com. The author of this page is also new to code.google.com, and is uncertain what to expect, and uncertain how to manage this new venue. Hopefully this venue will make f90tohtml more useful to its users. Perhaps this project can become a community project. Apologies for letting the old site become outdated. New project owners and project members are welcome.

By the way, the tip about https at Getting Started with Google Code Hosting was very helpful. I had to manually enter https just to upload a new download! (but no problems in 2009)

Here are some public code browsers, that you can make with f90tohtml: * wrfbrowser, WRF version 3.5 * crmbrowser, CRM version 2.1.2 * d2psbrowser

Here are the legacy installation instructions:

What is f90tohtml?

f90tohtml is a PERL script that converts FORTRAN source code into HTML. All the subprogram calls are linked, both forward and backwards. A clickable calling tree is constructed. A subject index can be made from a user-supplied hash. A search engine, based on regular expressions, searches the code.

f90tohtml was developed for the purpose of browsing large numerical weather prediction codes, the University of Oklahoma's ARPS model, the PSU/UCAR MM5, the NCEP Regional Spectral Model, the Navy's COAMPS model, and the new community WRF model.

f90tohtml is most effective when used on your code; browsing from your own disk is much quicker than over the net. But you may view an online WRF Browser. The WRF model is v3.5, downloaded from http://www.wrf-model.org in April 2013.

The files and scripts that will help you apply f90tohtml to your source of WRF, ARPS5.0 and COAMPS2.0 are bundled with the distribution.

How to install f90tohtml
Download f90tohtml.tar.gz (meaning the latest version). Then gunzip f90tohtml.tar.gz, then tar xvf f90tohtml.tar
cd f90tohtml. Then vi f90tohtml and edit the line #!/usr/bin/perl to your path to perl, if need be. The path is usually either /usr/local/bin/perl or /usr/bin/perl. Also change the path to your f90tohtml directory in the statement $path_f90tohtml="/home/bfiedler/f90tohtml/";

Then chmod u+x f90tohtml

Add f90tohtml to your path in your .cshrc or .bashrc file.

Then cd examples

Do the appropriate editing within the first few lines of d2ps_prepare.pl and crm_prepare.pl. In d2ps.f2h change $dir_html in $dir_html="~/d2psbrowser/"; so that it contains a valid path to where f90tohtml will create a directory d2psbrowser. Do not create the directory d2psbrowser yourself. Such browser directories can always be later moved to your public html directory, or the browser directory can be made there directly. The search feature will not work until the browser directory is in a directory where cgi works.

Type d2ps_prepare.pl. A directory d2ps_ls and a file src.ls within that directory will be made. Actually, a d2ps_ls directory comes with the bundle. But within the .ls files, the filepath will be to a certain bfiedler, which, of course, will not work on your code.

Now type f90tohtml d2ps.f2h

If successful, f90tohtml will tell you where to open your html-ized code with firefox, or a similar browser.

If you want use the search engine, move the browser to your public directory. Move grepper.cgi to your personal cgi-bin. The browser is coded to find the cgi-bin at the same level as the browser directory. Make sure you have permissions and the path to perl set correctly.

Try making a browser for the NCAR Column Radiation Model; first run crm_prepare.pl, make the appropriate changes within crm.f2h, then f90tohtml crm.f2h.

How to use a browser
All the little gif images you see in the browser are not decorations; they all have a purpose.

The green balls open trees. Links in trees open the calling statement.

The cyan balls at call statements open the calling program; the underlined link opens the subroutine being called. The default is for code to open in the bottom window.

The colored bars duplicate the bottom window into the top window, which is where you will probably do most of the browsing and clicking. The duplication feature is very useful for browsing up or down the calling tree.

Help for WRF, COAMPS, MM5 and ARPS:
Configuration files for WRF, COAMPS, MM5 and ARPS are found within the nwp_codes directory. Since the source codes are not provided, you will obviously need to obtain a source code before you make a browser. In the "prepare" files (e.g., wrf_prepare.pl), you will need to set $the_path to your source code.

Repair the first few lines of the Perl script wrf_prepare.pl.
Then run it to prepare the appropriate .ls files.
Change $dir_html in wrf.f2h .
Then type f90tohtml wrf.f2h. You should be directed to your wrfbrowser.
