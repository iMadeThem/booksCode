class CreateShouts < ActiveRecord::Migration
  def self.up
    create_table :shouts do |t|
      t.string :name
      t.date :shout_date
      t.string :shout_message

      t.timestamps
    end
  end

  def self.down
    drop_table :shouts
  end
end
