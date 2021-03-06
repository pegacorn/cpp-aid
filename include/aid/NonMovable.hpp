// -*- tab-width: 4 -*-
/*!
  @file NonMovable.hpp

  Copyright 2015 pegacorn

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/
#ifndef aid_NonMovable_hpp
#define aid_NonMovable_hpp


namespace aid {

class NonMovable
{
  protected:
	constexpr NonMovable() noexcept = default;
	~NonMovable() noexcept = default;

	NonMovable(const NonMovable &) noexcept = default;
	NonMovable &operator=(const NonMovable &) noexcept = default;

	NonMovable(NonMovable &&) = delete;
	NonMovable &operator=(NonMovable &&) = delete;
}; // class NonMovable

} // namespace aid


#endif // aid_NonMovable_hpp
