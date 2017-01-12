<?php

use Illuminate\Database\Seeder;

class BlockTableSeeder extends Seeder
{
    public function run()
    {
        DB::table('blocks')->insert([
            [
                'user_id'       => '1',
                'category_id'   => '1',
                'slug'          => 'sed-ut-perspiciatis-unde-omnis-iste',
                'name'          => 'SED UT PERSPICIATIS UNDE OMNIS ISTE',
                'url'           => '',
                'description'   => 'Suspendisse in justo eu magna luctus suscipit. Sed lectus. Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper.

        Nulla facilisi. Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales.

        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Curabitur sodales ligula in libero.',
                'status'        => 'Show',
                'published'     => 'Yes',
                'image'         => '{"folder":"blocks\\/2016\\/07\\/21\\/104902202\\/image","file":"block03.jpg","caption":"Block03","time":"2016-07-21 10:50:23"}',
                'images'        => '[{"folder":"blocks\\/2016\\/07\\/21\\/104902202\\/images","file":"block01.jpg","caption":"Block01","time":"2016-07-21 10:50:32"},{"folder":"blocks\\/2016\\/07\\/21\\/104902202\\/images","file":"block02.jpg","caption":"Block02","time":"2016-07-21 10:50:33"},{"folder":"blocks\\/2016\\/07\\/21\\/104902202\\/images","file":"block03.jpg","caption":"Block03","time":"2016-07-21 10:50:34"}]',
                'upload_folder' => 'blocks/2016/07/21/104902202',
                'deleted_at'    => null, 'updated_at' => '2016-07-21 11:24:45',
                'created_at'    => '2016-07-20 00:00:00'],
            [
                'user_id'       => '1',
                'category_id'   => '3',
                'slug'          => 'sed-ut-perspiciatis-unde-omnis-iste-2',
                'name'          => 'SED UT PERSPICIATIS UNDE OMNIS ISTE',
                'url'           => '',
                'description'   => 'Suspendisse in justo eu magna luctus suscipit. Sed lectus. Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper.
         Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, aliquet eget, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Curabitur sodales ligula in libero.',
                'status'        => 'Show',
                'published'     => 'Yes',
                'image'         => '{"folder":"blocks\\/2016\\/07\\/21\\/104854884\\/image","file":"block02.jpg","caption":"Block02","time":"2016-07-21 10:50:02"}',
                'images'        => '[{"folder":"blocks\\/2016\\/07\\/21\\/104854884\\/images","file":"block01.jpg","caption":"Block01","time":"2016-07-21 10:50:10"},{"folder":"blocks\\/2016\\/07\\/21\\/104854884\\/images","file":"block02.jpg","caption":"Block02","time":"2016-07-21 10:50:11"},{"folder":"blocks\\/2016\\/07\\/21\\/104854884\\/images","file":"block03.jpg","caption":"Block03","time":"2016-07-21 10:50:11"}]',
                'upload_folder' => 'blocks/2016/07/21/104854884',
                'deleted_at'    => null, 'updated_at' => '2016-07-21 11:24:50',
                'created_at'    => '2016-07-20 00:00:00'],
            [
                'user_id'       => '1',
                'category_id'   => '4',
                'slug'          => 'sed-ut-perspiciatis-unde-omnis-iste-3',
                'name'          => 'SED UT PERSPICIATIS UNDE OMNIS ISTE',
                'url'           => '',
                'description'   => 'Suspendisse in justo eu magna luctus suscipit. Sed lectus. Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper. Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, aliquet eget, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Curabitur sodales ligula in libero.',
                'status'        => 'Show',
                'published'     => 'Yes',
                'image'         => '{"folder":"blocks\\/2016\\/07\\/21\\/104846403\\/image","file":"block01.jpg","caption":"Block01","time":"2016-07-21 10:49:32"}',
                'images'        => '[{"folder":"blocks\\/2016\\/07\\/21\\/104846403\\/images","file":"block02.jpg","caption":"Block02","time":"2016-07-21 10:49:43"},{"folder":"blocks\\/2016\\/07\\/21\\/104846403\\/images","file":"block03.jpg","caption":"Block03","time":"2016-07-21 10:49:44"},{"folder":"blocks\\/2016\\/07\\/21\\/104846403\\/images","file":"blog2.jpg","caption":"Blog2","time":"2016-07-21 10:49:44"}]',
                'upload_folder' => 'blocks/2016/07/21/104846403',
                'deleted_at'    => null, 'updated_at' => '2016-07-21 11:24:58',
                'created_at'    => '2016-07-20 00:00:00'],

        ]);

        DB::table('block_categories')->insert([
            [
                'user_id'    => '1',
                'slug'       => 'family',
                'name'       => 'FAMILY',
                'status'     => 'Show',
                'created_at' => '2016-07-20 07:17:00',
                'updated_at' => '2016-07-20 07:17:00',
                'deleted_at' => null],
            [
                'user_id'    => '1',
                'slug'       => 'adventure',
                'name'       => 'ADVENTURE',
                'status'     => 'Show',
                'created_at' => '2016-07-20 07:17:48',
                'updated_at' => '2016-07-20 07:17:48',
                'deleted_at' => null],
            [
                'user_id'    => '1',
                'slug'       => 'romantic',
                'name'       => 'ROMANTIC',
                'status'     => 'Show',
                'created_at' => '2016-07-20 07:18:13',
                'updated_at' => '2016-07-20 07:18:13',
                'deleted_at' => null],
            [
                'user_id'    => '1',
                'slug'       => 'wildlife',
                'name'       => 'WILDLIFE',
                'status'     => 'Show',
                'created_at' => '2016-07-20 07:18:46',
                'updated_at' => '2016-07-20 07:18:46',
                'deleted_at' => null],
            [
                'user_id'    => '1',
                'slug'       => 'beach',
                'name'       => 'BEACH',
                'status'     => 'Show',
                'created_at' => '2016-07-20 07:19:30',
                'updated_at' => '2016-07-20 07:19:30',
                'deleted_at' => null],
        ]);

        DB::table('menus')->insert([

            [
                'parent_id' => 1,
                'key'       => null,
                'url'       => 'admin/block',
                'name'      => 'Blocks',
                'icon'      => 'fa fa-square',
                'target'    => null,
                'order'     => 100,
                'status'    => 1,
            ],
            [
                'parent_id' => 1,
                'key'       => null,
                'url'       => 'admin/block/block',
                'name'      => 'Blocks',
                'icon'      => 'fa fa-square',
                'target'    => null,
                'order'     => 101,
                'status'    => 1,
            ],
            [
                'parent_id' => 1,
                'key'       => null,
                'url'       => 'admin/block/category',
                'name'      => 'Categories',
                'icon'      => 'fa fa-bars',
                'target'    => null,
                'order'     => 102,
                'status'    => 1,
            ],

            [
                'parent_id' => 2,
                'key'       => null,
                'url'       => 'user/block/block',
                'name'      => 'Blocks',
                'icon'      => 'icon-grid',
                'target'    => null,
                'order'     => 100,
                'status'    => 1,
            ],

            [
                'parent_id' => 3,
                'key'       => null,
                'url'       => 'blocks',
                'name'      => 'Blocks',
                'icon'      => null,
                'target'    => null,
                'order'     => 100,
                'status'    => 1,
            ],

        ]);

        DB::table('permissions')->insert([
            [
                'slug' => 'block.block.view',
                'name' => 'View Block',
            ],
            [
                'slug' => 'block.block.create',
                'name' => 'Create Block',
            ],
            [
                'slug' => 'block.block.edit',
                'name' => 'Update Block',
            ],
            [
                'slug' => 'block.block.delete',
                'name' => 'Delete Block',
            ],

            [
                'slug' => 'block.category.view',
                'name' => 'View Category',
            ],

            [
                'slug' => 'block.category.create',
                'name' => 'Create Category',
            ],
            [
                'slug' => 'block.category.edit',
                'name' => 'Update Category',
            ],
            [
                'slug' => 'block.category.delete',
                'name' => 'Delete Category',
            ],
        ]);

        DB::table('settings')->insert([
            // Uncomment  and edit this section for entering value to settings table.
            /*
        [
        'key'      => 'block.block.key',
        'name'     => 'Some name',
        'value'    => 'Some value',
        'type'     => 'Default',
        ],
         */
        ]);
    }
}
