/*
  Copyright (C) 2012 Stuffomatic Ltd. <contact@stuff-o-matic.com>

  All rights reserved.
*/
/**
 * \file player_proxy.hpp
 * \brief Automatically generated proxy class for ptb::player.
 */
#ifndef __PTB_PLAYER_PROXY_HPP__
#define __PTB_PLAYER_PROXY_HPP__

#include "universe/physical_item.hpp"

/*
                                  WARNING
                 *** This file is automatically generated. ***
             *** Do not edit. All changes will be overwritten. ***
*/

#include <set>
#include <list>
#include "engine/level.hpp"
#include "engine/level_globals.hpp"
#include "engine/scene_visual.hpp"
#include "engine/model/model_mark_placement.hpp"
#include "universe/forced_movement/forced_movement.hpp"
#include "universe/world.hpp"
#include "ptb/item_brick/monster.hpp"
#include "ptb/player_action.hpp"

namespace ptb
{
  class corrupting_bonus_attractor;
  class throwable_item;
  class state_player;
  class stone;
class gauge;
class player_signals;
class throwable_items_container;

  class player;

  class player_proxy
  {
  public:
    player_proxy();
    player_proxy( player* p );
    player_proxy( bear::universe::physical_item* p );

    bool operator==( player* p ) const;
    bool operator!=( player* p ) const;
    bool operator==( const player_proxy& that ) const;
    bool operator!=( const player_proxy& that ) const;

    player* get_player_instance() const;

bear::universe::coordinate_type get_vertical_jump_force() const;
bear::universe::position_type hot_spot() const;
bool attack( bear::engine::base_item& that ) const;
bool can_throw_power(const monster::attack_type a) const;
bool get_defensive_power(ptb::monster::attack_type index) const;
bool get_offensive_phase() const;
bool get_status_crouch() const;
bool get_status_look_upward() const;
bool is_a_marionette() const;
bool is_clung() const;
bool is_injured() const;
bool is_in_offensive_phase() const;
bool is_invincible() const;
bool is_stone_vulnerable() const;
bool is_valid() const;
bool is_vulnerable( monster& attacker ) const;
bool receive_an_attack( monster& attacker, bear::universe::zone::position side ) const;
bool set_u_integer_field( const std::string& name, unsigned int value ) const;
bool want_clung_jump() const;
const ptb::gauge& get_cold_gauge() const;
const ptb::gauge& get_heat_gauge() const;
const ptb::gauge& get_oxygen_gauge() const;
const ptb::throwable_items_container& get_throwable_items() const;
double get_energy() const;
double get_jump_time_ratio() const;
double get_max_energy() const;
ptb::monster::monster_type get_monster_type() const;
ptb::player_signals& get_signals() const;
ptb::throwable_items_container& get_throwable_items() ;
unsigned int get_index() const;
unsigned int get_monster_index() const;
void add_air_stone(stone* s) const;
void add_spot_gap( const bear::universe::position_type& gap ) const;
void apply_attack() const;
void apply_blast_stone() const;
void apply_captive() const;
void apply_change_object() const;
void apply_cling() const;
void apply_clung_jump() const;
void apply_continue_jump() const;
void apply_crouch() const;
void apply_die() const;
void apply_disappear() const;
void apply_dive() const;
void apply_fall() const;
void apply_float() const;
void apply_game_over() const;
void apply_hang() const;
void apply_idle() const;
void apply_impulse_jump() const;
void apply_injured() const;
void apply_jump() const;
void apply_look_upward() const;
void apply_maintain() const;
void apply_move_left() const;
void apply_move_right() const;
void apply_paralyze(bear::universe::time_type duration) const;
void apply_release() const;
void apply_roar() const;
void apply_run() const;
void apply_sink() const;
void apply_slap() const;
void apply_sniff() const;
void apply_start_cling() const;
void apply_start_hang() const;
void apply_start_jump() const;
void apply_swim_down() const;
void apply_swim_in_float() const;
void apply_swim_jump() const;
void apply_swimming() const;
void apply_swim_up() const;
void apply_swim_up_in_float() const;
void apply_throw() const;
void apply_throw_object() const;
void apply_vertical_jump() const;
void apply_wait() const;
void apply_walk() const;
void authorize_action( const std::string& a ) const;
void authorize_all_actions() const;
void balance_spot( bool x, bool y ) const;
void choose_idle_state() const;
void choose_wait_state() const;
void choose_walk_state() const;
void disable_all_actions() const;
void do_action( bear::universe::time_type elapsed_time, player_action::value_type a ) const;
void do_start_crouch() const;
void do_start_look_upward() const;
void do_start_throw() const;
void get_visual( std::list<bear::engine::scene_visual>& visuals ) const;
void give_one_up() const;
void has_attacked(const monster& other) const;
void on_enters_layer() const;
void pre_cache() const;
void progress( bear::universe::time_type elapsed_time ) const;
void receive_energy(double energy) const;
void receive_oxygen(double oxygen) const;
void remove_air_stone(stone* s) const;
void remove_energy(const monster& attacker, double energy ) const;
void save_current_position() const;
void save_position( const bear::universe::position_type& p ) const;
void set_air_float(bool status) const;
void set_authorized_action(player_action::value_type a, bool value) const;
void set_can_cling(bool status) const;
void set_can_throw_power(bool b, monster::attack_type a) const;
void set_defensive_power(ptb::monster::attack_type index, bool statut) const;
void set_energy(double energy) const;
void set_index( unsigned int index ) const;
void set_invincible(const bool invincible) const;
void set_marionette( bool b) const;
void set_max_energy(double energy) const;
void set_monster_index(unsigned int index) const;
void set_monster_type(ptb::monster::monster_type m) const;
void set_offensive_coefficient(ptb::monster::attack_type index, unsigned int coef) const;
void set_offensive_phase(const bool offensive_phase) const;
void set_spot_balance_move( bear::universe::coordinate_type x, bear::universe::coordinate_type y ) const;
void set_spot_maximum( bear::universe::coordinate_type x, bear::universe::coordinate_type y ) const;
void set_spot_minimum( bear::universe::coordinate_type x, bear::universe::coordinate_type y ) const;
void set_status_crouch(bool status) const;
void set_status_look_upward(bool status) const;
void set_throw_down(bool value) const;
void set_throw_up(bool value) const;
void set_want_clung_jump(bool status) const;
void start_action_model(const std::string& action) const;
void start_action( player_action::value_type a ) const;
void stop_action( player_action::value_type a ) const;
void stop() const;
void throw_hazelnut() const;
void update_throw_time_ratio() const;

    void speak( const std::vector<std::string>& speech ) const;
    void speak( const std::string& s ) const;
    bool has_finished_to_speak() const;

    bear::engine::level& get_level() const;
    bear::engine::level_globals& get_level_globals() const;
    bool has_owner() const;
    const bear::universe::world& get_owner() const;

    bear::visual::bitmap_rendering_attributes get_rendering_attributes() const;
    void set_auto_mirror( bool b );
    bool has_bottom_contact() const;

    bear::universe::position_type get_center_of_mass() const;
    bear::universe::position_type get_bottom_middle() const;    
    bear::universe::position_type get_top_left() const;
    bear::universe::position_type get_top_right() const;
    bear::universe::position_type get_bottom_left() const;
    bear::universe::position_type get_bottom_right() const;
    bear::universe::position_type get_top_middle() const;
    bear::universe::coordinate_type get_horizontal_middle() const;
    bear::universe::coordinate_type get_vertical_middle() const;
    bear::universe::coordinate_type get_bottom() const;
    bear::universe::coordinate_type get_top() const;
    bear::universe::coordinate_type get_left() const;
    bear::universe::coordinate_type get_right() const;
    bear::universe::rectangle_type get_bounding_box() const;

    void set_forced_movement( const bear::universe::forced_movement& m );
    bool has_forced_movement() const;
    void clear_forced_movement();

    bear::universe::size_type get_width() const;
    bear::universe::size_type get_height() const;

    bear::universe::speed_type get_speed() const;
    void add_internal_force( bear::universe::force_type f ) const;
    void add_external_force( bear::universe::force_type f ) const;

    double get_mass() const;
    void set_mass( double m ) const;
    
    int get_z_position() const;
    void set_z_position(int z);

    double get_density() const;
    void set_density( double d ) const;

    void set_system_angle( double a ) const;

    std::string get_current_action_name() const;
    bool get_mark_placement
    ( const std::string& mark_name, bear::engine::model_mark_placement& m ) const;
    void switch_action
    (player_action::value_type a, player_action::value_type b);
    void clear_switched_action
    (player_action::value_type a, player_action::value_type b);

  private:
    player* m_player;
  }; // class
} // namespace ptb

#endif // __PTB_PLAYER_PROXY_HPP__
