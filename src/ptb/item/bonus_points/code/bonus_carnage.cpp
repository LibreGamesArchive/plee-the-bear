/*
  Copyright (C) 2012 Stuffomatic Ltd. <contact@stuff-o-matic.com>

  All rights reserved.
*/
/**
 * \file
 * \brief Implementation of the ptb::bonus_carnage class.
 * \author Julien Jorge
 */
#include "ptb/item/bonus_points/bonus_carnage.hpp"

#include <libintl.h>

BASE_ITEM_EXPORT( bonus_carnage, ptb )

/*----------------------------------------------------------------------------*/
/**
 * \brief Constructor.
 */
ptb::bonus_carnage::bonus_carnage()
: super("Carnage", 20000)
{
  set_picture_filename("gfx/ui/bonus-icons/bonus-icons.png");
  set_picture_name("carnage");
} // bonus_carnage::bonus_carnage()


