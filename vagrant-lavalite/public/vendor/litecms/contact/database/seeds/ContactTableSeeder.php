<?php

use Illuminate\Database\Seeder;

class ContactTableSeeder extends Seeder
{
    public function run()
    {
        DB::table('contacts')->insert([
            [
                'name'       => 'Renfos technologies',
                'slug'       => 'renfos-technologies',
                'phone'      => '2147483647',
                'mobile'     => '9856321478',
                'email'      => 'india@renfos.com',
                'website'    => '',
                'address'    => 'INFOPARK Technology Business Centre
                Sector E Hall, JNI Stadium Complex
                Kochi, Kerala, Pin 682017
                India',
                'created_at' => '2016-07-19 17:18:55',
                'updated_at' => '2016-07-19 11:48:55',
                'deleted_at' => null, 'user_id' => '1',
            ],

        ]);

        DB::table('menus')->insert([

            [
                'parent_id'   => 1,
                'key'         => null,
                'url'         => 'admin/contact/contact',
                'name'        => 'Contacts',
                'description' => null,
                'icon'        => 'fa fa-phone-square',
                'target'      => null,
                'order'       => 140,
                'status'      => 1,
            ],
            [
                'parent_id'   => 3,
                'key'         => null,
                'url'         => 'contacts',
                'name'        => 'Contacts',
                'description' => null,
                'icon'        => null,
                'target'      => null,
                'order'       => 140,
                'status'      => 1,
            ],

        ]);

        DB::table('permissions')->insert([
            [
                'slug' => 'contact.contact.view',
                'name' => 'View Contact',
            ],
            [
                'slug' => 'contact.contact.create',
                'name' => 'Create Contact',
            ],
            [
                'slug' => 'contact.contact.edit',
                'name' => 'Update Contact',
            ],
            [
                'slug' => 'contact.contact.delete',
                'name' => 'Delete Contact',
            ],
        ]);

        DB::table('settings')->insert([
            // Uncomment  and edit this section for entering value to settings table.
            /*
        [
        'key'      => 'contact.contact.key',
        'name'     => 'Some name',
        'value'    => 'Some value',
        'type'     => 'Default',
        ],
         */
        ]);
    }
}
