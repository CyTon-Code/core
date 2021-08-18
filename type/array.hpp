/* INFO
 *
 * File: tangible.hpp
 * Language: Cpp
 * Author: Dal Bo Yob
 * We: DBY Company
 *
 * Copyright 2021 DBY Company <dal@bo.yob>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

/* THOUGHT
 *
 * Это класс - массив строк
 * этот класс содержит прекраснные функции для работы с содержимым
 *
 *
 *
 */

/* */
#ifndef GAME_OBJECT_ARRAY
#define GAME_OBJECT_ARRAY
/*
 * File: array.hpp
 * Language: Cpp
 * Author: Dal Bo Yob
 * We: DBY Company
 *
 * Copyright 2021 DBY Company <dal@bo.yob>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#ifndef GAME_LIST
#define GAME_LIST

#include <iostream>    /* std::cout */
#include <vector>    /* std::vector */
#include <string>    /* std::string */

#include "../tools/tools__log.hpp"    /* tools__log */

/* */
class Array
{
  /* TODO добавити функции */
  public:
      
    /* */
    // void
    // del (const std::string &_value)
  
    /* */
    // int
    // search (const std::string &_value)
  
    /* get end element */
    // std::string
    // end ()
     
  private:
  
    /* my lines */ 
    std::vector<std::string> array;
};

#endif /* GAME_OBJECT_ARRAY */
