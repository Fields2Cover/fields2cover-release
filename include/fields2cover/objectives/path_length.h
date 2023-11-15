//=============================================================================
//    Copyright (C) 2021-2022 Wageningen University - All Rights Reserved
//                     Author: Gonzalo Mier
//                        BSD-3 License
//=============================================================================

#pragma once
#ifndef FIELDS2COVER_OBJECTIVES_PATH_LENGTH_H_
#define FIELDS2COVER_OBJECTIVES_PATH_LENGTH_H_

#include "fields2cover/objectives/pp_objective.h"

namespace f2c::obj {

class PathLength : public PPObjective {
 public:
  using PPObjective::computeCost;
};

}  // namespace f2c::obj

#endif  // FIELDS2COVER_OBJECTIVES_PATH_LENGTH_H_
