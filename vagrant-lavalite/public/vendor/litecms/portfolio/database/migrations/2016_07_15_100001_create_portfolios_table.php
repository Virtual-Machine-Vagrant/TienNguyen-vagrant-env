<?php

use Illuminate\Database\Migrations\Migration;

class CreatePortfoliosTable extends Migration
{
    /*
     * Run the migrations.
     *
     * @return void
     */

    public function up()
    {

        /*
         * Table: categories
         */
        Schema::create('portfolio_categories', function ($table) {
            $table->increments('id');
            $table->string('name', 50)->nullable();
            $table->string('slug', 200)->nullable();
            $table->enum('status', ['show', 'hide'])->default('hide')->nullable();
            $table->integer('user_id')->nullable();
            $table->string('upload_folder', 100)->nullable();
            $table->softDeletes();
            $table->nullableTimestamps();
        });
        /*
         * Table: portfolios
         */
        Schema::create('portfolios', function ($table) {
            $table->increments('id');
            $table->string('title', 50)->nullable();
            $table->text('details')->nullable();
            $table->integer('category_id')->nullable();
            $table->text('image')->nullable();
            $table->text('images')->nullable();
            $table->string('slug', 200)->nullable();
            $table->enum('published', ['Yes', 'No'])->default('No')->nullable();
            $table->enum('status', ['show', 'hide'])->default('hide')->nullable();
            $table->integer('user_id')->nullable();
            $table->string('upload_folder', 100)->nullable();
            $table->softDeletes();
            $table->nullableTimestamps();
        });
    }

    /*
     * Reverse the migrations.
     *
     * @return void
     */

    public function down()
    {
        Schema::drop('portfolio_categories');
        Schema::drop('portfolios');
    }
}
