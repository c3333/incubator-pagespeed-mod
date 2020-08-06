/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

// Utility functions for operating on CssStringPieces
// Collected here for convenience

#ifndef STRINGS_STRINGPIECE_UTILS_H_
#define STRINGS_STRINGPIECE_UTILS_H_

#include <vector>

#include "third_party/css_parser/src/strings/stringpiece.h"

namespace strings {

// removes leading and trailing ascii_isspace() chars. Returns
// number of chars removed
int RemoveWhitespaceContext(CssStringPiece* text);

}  // namespace strings

#endif  // STRINGS_STRINGPIECE_UTILS_H_
