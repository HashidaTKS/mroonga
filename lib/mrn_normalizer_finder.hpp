/* -*- c-basic-offset: 2 -*- */
/*
  Copyright(C) 2013 Kouhei Sutou <kou@clear-code.com>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef MRN_NORMALIZER_FINDER_HPP_
#define MRN_NORMALIZER_FINDER_HPP_

#include <groonga.h>

#include <mrn_mysql.h>
#include <mrn_mysql_compat.h>

namespace mrn {
  class NormalizerFinder {
  public:
    NormalizerFinder(grn_ctx *ctx, THD *thread);
    ~NormalizerFinder();

    grn_obj *find(Field *field);

  private:
    grn_ctx *ctx_;
    THD *thread_;
  };
}

#endif // MRN_NORMALIZER_FINDER_HPP_
