// Copyright (c) 2014-2018 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_JSON_PEGTL_INCLUDE_INTERNAL_INPUT_PAIR_HPP
#define TAO_JSON_PEGTL_INCLUDE_INTERNAL_INPUT_PAIR_HPP

#include "../config.hpp"

namespace tao
{
   namespace TAO_JSON_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename Data >
         struct input_pair
         {
            Data data;
            unsigned char size;

            using data_t = Data;

            explicit operator bool() const noexcept
            {
               return size > 0;
            }
         };

      }  // namespace internal

   }  // namespace TAO_JSON_PEGTL_NAMESPACE

}  // namespace tao

#endif
