/* Copyright (C) 2003 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */

#ifndef DICT_SIZE_ALT_REQ_H
#define DICT_SIZE_ALT_REQ_H



#include "SignalData.hpp"

class DictSizeAltReq {
  /**
   * Sender(s)
   */
  friend class ClusterConfiguration;

  /**
   * Reciver(s)
   */
  friend class Dbdict;
private:
  /**
   * Indexes in theData
   */
  STATIC_CONST( IND_BLOCK_REF     = 0 );
  STATIC_CONST( IND_ATTRIBUTE     = 1 );
  STATIC_CONST( IND_CONNECT       = 2 );
  STATIC_CONST( IND_FRAG_CONNECT  = 3 );
  STATIC_CONST( IND_TABLE         = 4 );
  STATIC_CONST( IND_TC_CONNECT    = 5 );
  
  /**
   * Use the index definitions to use the signal data
   */
  UintR theData[6];
};

#endif