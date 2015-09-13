// -*- tab-width: 4 -*-
/*!
  @file NonCopyable.hpp

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
#ifndef aid_NonCopyable_hpp
#define aid_NonCopyable_hpp


namespace aid {

class NonCopyable
{
  protected:
	constexpr NonCopyable() noexcept = default;
	~NonCopyable() noexcept = default;

	NonCopyable(const NonCopyable &) = delete;
	NonCopyable &operator=(const NonCopyable &) = delete;

	NonCopyable(NonCopyable &&) noexcept = default;
	NonCopyable &operator=(NonCopyable &&) noexcept = default;
}; // class NonCopyable

} // namespace aid


#endif // aid_NonCopyable_hpp
