/**********************************************************************************************************************
 * Copyright (c) Prophesee S.A.                                                                                       *
 *                                                                                                                    *
 * Licensed under the Apache License, Version 2.0 (the "License");                                                    *
 * you may not use this file except in compliance with the License.                                                   *
 * You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0                                 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed   *
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.                      *
 * See the License for the specific language governing permissions and limitations under the License.                 *
 **********************************************************************************************************************/

#ifndef METAVISION_SDK_DRIVER_ANTIFLICKER_MODULE_H
#define METAVISION_SDK_DRIVER_ANTIFLICKER_MODULE_H

#include <cstdint>

#include "metavision/hal/facilities/i_antiflicker_module.h"

namespace Metavision {

/// @brief Facility class to handle anti-flicker configuration on the hardware side
class AntiFlickerModule {
public:
    /// @brief Constructor
    AntiFlickerModule(I_AntiFlickerModule *afk);

    /// @brief Destructor
    ~AntiFlickerModule();

    /// @brief Toggles anti-flicker activation
    /// @param b Desired state. b = true means anti-flicker active, and b = false means anti-flicker inactive.
    /// @note When anti-flicker is inactive, all the events generated by the sensor are transmitted. Potential
    /// bandwidth limitation might occur.
    void enable(bool b);

    /// @brief Gives the anti-flicker filter state
    bool is_enabled();

    /// @brief Sets anti-flicker parameters.
    ///
    /// Defines the frequency band to be kept or removed in the range [50 - 500] Hz
    ///
    /// @param min_freq Lower frequency of the band (in Hz)
    /// @param max_freq Higher frequency of the band (in Hz)
    /// @throw exception if frequencies are outside of the range [min_supported_freq, max_supported_freq] Hz
    void set_frequency_band(uint32_t min_freq, uint32_t max_freq);

    /// @brief Sets the anti-flicker filtering mode
    /// @param mode Anti-flicker mode
    void set_filtering_mode(I_AntiFlickerModule::AntiFlickerMode mode);

    /// @brief Gets corresponding facility in HAL library
    I_AntiFlickerModule *get_facility() const;

private:
    I_AntiFlickerModule *pimpl_;
};

} // namespace Metavision

#endif // METAVISION_SDK_DRIVER_ANTIFLICKER_MODULE_H
