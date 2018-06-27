/******************************************************************************
 * Copyright (c) 2017 Philipp Schubert.
 * All rights reserved. This program and the accompanying materials are made
 * available under the terms of LICENSE.txt.
 *
 * Contributors:
 *     Philipp Schubert and others
 *****************************************************************************/

#pragma once

#include <iosfwd>

namespace psr {

class EdgeFact {
public:
  virtual ~EdgeFact() = default;
  virtual std::ostream &print(std::ostream &os) const = 0;
};
} // namespace psr
