<?php

use Illuminate\Database\Seeder;

class PortfolioTableSeeder extends Seeder
{
    public function run()
    {
        DB::table('portfolios')->insert([

            [
                'title'         => 'BRAND DESIGN',
                'details'       => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

              Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?',
                'category_id'   => '3',
                'image'         => '{"folder":"portfolios\\/2016\\/07\\/23\\/163526478\\/image","file":"03.jpg","caption":"03","time":"2016-07-23 16:35:37"}',
                'images'        => '[{"folder":"portfolios\\/2016\\/07\\/23\\/163526478\\/images","file":"02.jpg","caption":"02","time":"2016-07-23 16:35:42"},{"folder":"portfolios\\/2016\\/07\\/23\\/163526478\\/images","file":"03.jpg","caption":"03","time":"2016-07-23 16:35:43"},{"folder":"portfolios\\/2016\\/07\\/23\\/163526478\\/images","file":"04.jpg","caption":"04","time":"2016-07-23 16:35:43"}]',
                'slug'          => 'brand-design',
                'published'     => 'Yes',
                'status'        => 'show',
                'user_id'       => '1',
                'upload_folder' => 'portfolios/2016/07/23/163526478',
                'deleted_at'    => null, 'created_at' => '2016-07-20 10:51:21',
                'updated_at'    => '2016-07-23 16:35:46',
            ],
            [
                'title'         => 'BRAND DESIGN',
                'details'       => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

              Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?',
                'category_id'   => '2',
                'image'         => '{"folder":"portfolios\\/2016\\/07\\/23\\/163505227\\/image","file":"01.jpg","caption":"01","time":"2016-07-23 16:35:16"}',
                'images'        => '[{"folder":"portfolios\\/2016\\/07\\/23\\/163505227\\/images","file":"01.jpg","caption":"01","time":"2016-07-23 16:35:21"},{"folder":"portfolios\\/2016\\/07\\/23\\/163505227\\/images","file":"02.jpg","caption":"02","time":"2016-07-23 16:35:22"},{"folder":"portfolios\\/2016\\/07\\/23\\/163505227\\/images","file":"03.jpg","caption":"03","time":"2016-07-23 16:35:22"}]',
                'slug'          => 'brand-design-2',
                'published'     => 'Yes',
                'status'        => 'show',
                'user_id'       => '1',
                'upload_folder' => 'portfolios/2016/07/23/163505227',
                'deleted_at'    => null, 'created_at' => '2016-07-20 12:38:19',
                'updated_at'    => '2016-07-23 16:35:24',
            ],
            [
                'title'         => 'BRAND DESIGN',
                'details'       => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

              Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?',
                'category_id'   => '4',
                'image'         => '{"folder":"portfolios\\/2016\\/07\\/23\\/163446422\\/image","file":"03.jpg","caption":"03","time":"2016-07-23 16:34:55"}',
                'images'        => '[{"folder":"portfolios\\/2016\\/07\\/23\\/163446422\\/images","file":"03.jpg","caption":"03","time":"2016-07-23 16:34:59"}]',
                'slug'          => 'brand-design-3',
                'published'     => 'Yes',
                'status'        => 'show',
                'user_id'       => '1',
                'upload_folder' => 'portfolios/2016/07/23/163446422',
                'deleted_at'    => null, 'created_at' => '2016-07-20 12:38:23',
                'updated_at'    => '2016-07-23 16:35:01',
            ],
            [
                'title'         => 'BRAND DESIGN',
                'details'       => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

              Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?',
                'category_id'   => '1',
                'image'         => '{"folder":"portfolios\\/2016\\/07\\/23\\/163422757\\/image","file":"01.jpg","caption":"01","time":"2016-07-23 16:34:36"}',
                'images'        => '[{"folder":"portfolios\\/2016\\/07\\/23\\/163422757\\/images","file":"01.jpg","caption":"01","time":"2016-07-23 16:34:41"},{"folder":"portfolios\\/2016\\/07\\/23\\/163422757\\/images","file":"02.jpg","caption":"02","time":"2016-07-23 16:34:41"}]',
                'slug'          => 'brand-design-4',
                'published'     => 'Yes',
                'status'        => 'show',
                'user_id'       => '1',
                'upload_folder' => 'portfolios/2016/07/23/163422757',
                'deleted_at'    => null, 'created_at' => '2016-07-20 10:51:55',
                'updated_at'    => '2016-07-23 16:34:43',
            ],

        ]);

        DB::table('portfolio_categories')->insert([
            [
                'user_id'    => '1',
                'name'       => 'HTML',
                'slug'       => 'html',
                'status'     => 'Show',
                'created_at' => '2016-07-19 12:37:15',
                'updated_at' => '2016-07-19 12:37:15',
                'deleted_at' => null,
            ],
            [
                'user_id'    => '1',
                'name'       => 'Word Press',
                'slug'       => 'word-press',
                'status'     => 'Show',
                'created_at' => '2016-07-19 12:37:25',
                'updated_at' => '2016-07-19 12:37:25',
                'deleted_at' => null,
            ],
            [
                'user_id'    => '1',
                'name'       => 'UI/UX',
                'slug'       => 'uiux',
                'status'     => 'Show',
                'created_at' => '2016-07-19 12:37:55',
                'updated_at' => '2016-07-19 12:37:55',
                'deleted_at' => null,
            ],
            [
                'user_id'    => '1',
                'name'       => 'Print',
                'slug'       => 'print',
                'status'     => 'Show',
                'created_at' => '2016-07-19 12:40:22',
                'updated_at' => '2016-07-19 12:40:22',
                'deleted_at' => null,
            ],
        ]);

        DB::table('menus')->insert([

            [
                'parent_id'   => 1,
                'key'         => null,
                'url'         => 'admin/portfolio',
                'name'        => 'Portfolios',
                'description' => null,
                'icon'        => 'fa fa-cubes',
                'target'      => null,
                'order'       => 200,
                'status'      => 1,
            ],

            [
                'parent_id'   => 1,
                'key'         => null,
                'url'         => 'admin/portfolio/portfolio',
                'name'        => 'Portfolios',
                'description' => null,
                'icon'        => 'fa fa-cubes',
                'target'      => null,
                'order'       => 201,
                'status'      => 1,
            ],

            [
                'parent_id'   => 1,
                'key'         => null,
                'url'         => 'admin/portfolio/category',
                'name'        => 'Categories',
                'description' => null,
                'icon'        => 'fa fa-bars',
                'target'      => null,
                'order'       => 202,
                'status'      => 1,
            ],

            [
                'parent_id'   => 2,
                'key'         => null,
                'url'         => 'user/portfolio/portfolio',
                'name'        => 'Portfolios',
                'description' => null,
                'icon'        => 'icon-layers',
                'target'      => null,
                'order'       => 200,
                'status'      => 1,
            ],

            [
                'parent_id'   => 3,
                'key'         => null,
                'url'         => 'portfolio',
                'name'        => 'Portfolios',
                'description' => null,
                'icon'        => null,
                'target'      => null,
                'order'       => 200,
                'status'      => 1,
            ],

        ]);

        DB::table('permissions')->insert([
            [
                'slug' => 'portfolio.portfolio.view',
                'name' => 'View Portfolio',
            ],
            [
                'slug' => 'portfolio.portfolio.create',
                'name' => 'Create Portfolio',
            ],
            [
                'slug' => 'portfolio.portfolio.edit',
                'name' => 'Update Portfolio',
            ],
            [
                'slug' => 'portfolio.portfolio.delete',
                'name' => 'Delete Portfolio',
            ],

            [
                'slug' => 'portfolio.category.view',
                'name' => 'View Category',
            ],
            [
                'slug' => 'portfolio.category.create',
                'name' => 'Create Category',
            ],
            [
                'slug' => 'portfolio.category.edit',
                'name' => 'Update Category',
            ],
            [
                'slug' => 'portfolio.category.delete',
                'name' => 'Delete Category',
            ],
        ]);

        DB::table('settings')->insert([
            // Uncomment  and edit this section for entering value to settings table.
            /*
        [
        'key'      => 'portfolio.portfolio.key',
        'name'     => 'Some name',
        'value'    => 'Some value',
        'type'     => 'Default',
        ],
         */
        ]);
    }
}
