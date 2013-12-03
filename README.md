rbv_drupal_make
===============

Description
-----------
The Drupal make file for retebuonvivere website.

Submodule of
------------
This repository is a submodule of [retebuonvivere][0]

Start
-----
Build a new retebuonvivere panopoly-based installation using [drush][3] from retebuonvivere makefile, following [these][2] instructions: 

1. Clone the makefile repository with destination name as the sitename:
   
   ```Shell
   git clone git@github.com:miromarchi/rbv_drupal_make.git sitename
   ```

2. Download all the necessary modules with patches, themes, libraries (including drupal core and panopoly base distribution) and rbv_profile, in their right subdirectories with the following command (from inside the folder created, which will become the drupal root):

   `drush make retebuonvivere.make`

3. Download the telephone module separately because it always cause (uncomprehensible) problems in the makefile.

   `drush dl telephone`

4. Create a new mySQL db with all permissions.

5. Install drupal with rbv_profile profile with the following command (from drupal root):

   ```Shell
   drush site-install rbv_profile --account-name=admin --account-pass=admin --db-url=mysql://dbuser:dbpass@localhost/dbname
   ```

   Or you can run the installation script by accessing the site in your browser.

6. Now log in to your site in the browser (user:admin pass:admin), go to status report page at admin/status/report. If you see error messages do what is needed to resolve.

7. Now you have installed panopoly and some more contrib modules, you need to get the RBV features:

   ```Shell
   cd sites/all/modules/features
   git clone git@github.com:miromarchi/rbv_com_fields.git
   git clone git@github.com:miromarchi/rbv_org.git
   git clone git@github.com:miromarchi/rbv_project.git
   ```
8. Now you can install (in the order presented above) the features, and you are ready to go.

Documentation
-------------
All the documentation for development (soft/hard configuration, profile, makefile, distributions, ...) is at rbv_profile [wiki][1].

[0]: https://github.com/fonzy85vr/retebuonvivere
[1]: https://github.com/miromarchi/rbv_profile/wiki
[2]: https://drupal.org/project/drush_make
[3]: https://drupal.org/project/drush
[4]: https://github.com/miromarchi/rbv_profile
