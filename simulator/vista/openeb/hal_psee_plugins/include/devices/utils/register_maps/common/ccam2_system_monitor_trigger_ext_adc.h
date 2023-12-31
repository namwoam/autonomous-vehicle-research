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

#ifndef SRC_INC_CCAM2_SYSTEM_MONITOR_STRIGGER_EXT_ADC_H_
#define SRC_INC_CCAM2_SYSTEM_MONITOR_STRIGGER_EXT_ADC_H_

static RegmapElement CCAM2SystemMonitorTriggerExtADC[] = {
    // clang-format off
    {R, {{"TEMP_VCC_MONITOR_XADC/TEMP", 0x0}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VCC_INT", 0x2}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VCC_AUX", 0x4}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VP_VN", 0x6}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VREFP", 0x8}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VREFN", 0xa}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VCC_BRAM", 0xc}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SUPPLY_OFFSET", 0x10}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/OFFSET", 0x12}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/GAIN_ERROR", 0x14}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX0", 0x20}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX1", 0x22}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX2", 0x24}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX3", 0x26}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX4", 0x28}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX5", 0x2a}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX6", 0x2c}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX7", 0x2e}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX8", 0x30}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX9", 0x32}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX10", 0x34}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX11", 0x36}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX12", 0x38}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX13", 0x3a}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX14", 0x3c}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/VAUX15", 0x3e}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MAX_TEMP", 0x40}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MAX_VCC_INT", 0x42}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MAX_VCC_AUX", 0x44}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MAX_VCC_BRAM", 0x46}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MIN_TEMP", 0x48}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MIN_VCC_INT", 0x4a}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MIN_VCC_AUX", 0x4c}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/MIN_VCC_BRAM", 0x4e}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/FLAGS", 0x7e}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/CONF_REG0", 0x80}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/CONF_REG1", 0x82}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/CONF_REG2", 0x84}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG0", 0x90}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG1", 0x92}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG2", 0x94}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG3", 0x96}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG4", 0x98}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG5", 0x9a}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG6", 0x9c}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/SEQ_REG7", 0x9e}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG0", 0xa0}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG1", 0xa2}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG2", 0xa4}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG3", 0xa6}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG4", 0xa8}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG5", 0xaa}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG6", 0xac}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG7", 0xae}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG8", 0xb0}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG9", 0xb2}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG10", 0xb4}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG11", 0xb6}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG12", 0xb8}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG13", 0xba}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG14", 0xbc}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR_XADC/ALARM_THR_REG15", 0xbe}}},
    {F, {{"VALUE", 0, 16, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR/EVT_ENABLE", 0x100}}},
    {F, {{"ALL_EVT", 0, 1, 0x0}}},
    {F, {{"TEMP_EVT", 1, 1, 0x0}}},
    {F, {{"VCC_INT_EVT", 2, 1, 0x0}}},
    {F, {{"VCC_AUX_EVT", 3, 1, 0x0}}},
    {F, {{"VCC_BRAM_EVT", 4, 1, 0x0}}},
    {F, {{"ALL_ALARM", 8, 1, 0x0}}},
    {F, {{"OVER_TEMP_ALARM", 9, 1, 0x0}}},
    {F, {{"USER_TEMP_ALARM", 10, 1, 0x0}}},
    {F, {{"VCC_INT_ALARM", 11, 1, 0x0}}},
    {F, {{"VCC_AUX_ALARM", 12, 1, 0x0}}},
    {F, {{"VCC_BRAM_ALARM", 13, 1, 0x0}}},
    {F, {{"SYSTEM_POWER_DOWN", 16, 1, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR/EVT_PERIOD", 0x104}}},
    {F, {{"", 0, 24, 0x186a0}}},
    {R, {{"TEMP_VCC_MONITOR/EXT_TEMP_CONTROL", 0x108}}},
    {F, {{"STATUS_SYS_POWER_DOWN", 0, 1, 0x0}}},
    {F, {{"EXT_TEMP_MONITOR_EN", 1, 1, 0x0}}},
    {F, {{"EXT_TEMP_MONITOR_SPI_EN", 2, 1, 0x0}}},
    {F, {{"REMOTE_TEMP_MONITOR_EN", 3, 1, 0x0}}},
    {R, {{"TEMP_VCC_MONITOR/EVK_EXT_TEMP_VALUE", 0x10c}}},
    {F, {{"", 0, 22, 0x0}}},
    {R, {{"ATIS_IF_MONITOR/CFG_ENABLE", 0x140}}},
    {F, {{"ALL_EVT", 0, 1, 0x0}}},
    {F, {{"TD_IDLE_TIME_EVT", 1, 1, 0x0}}},
    {F, {{"TD_IDLE_TIMEOUT_EVT", 2, 1, 0x0}}},
    {F, {{"APS_IDLE_TIME_EVT", 3, 1, 0x0}}},
    {F, {{"APS_IDLE_TIMEOUT_EVT", 4, 1, 0x0}}},
    {F, {{"GLOBAL_ILLUMINATION_EVT", 5, 1, 0x0}}},
    {F, {{"EM_TRIGGER_SEQ_EVT", 6, 1, 0x0}}},
    {F, {{"REFRACTORY_CLOCK_EVT", 7, 1, 0x0}}},
    {R, {{"ATIS_IF_MONITOR/CFG_IDLE_TIME_THR", 0x144}}},
    {F, {{"VALUE", 0, 26, 0x2710}}},
    {R, {{"ATIS_IF_MONITOR/CFG_IDLE_TIMEOUT_THR", 0x148}}},
    {F, {{"VALUE", 0, 26, 0x2710}}},
    {R, {{"ATIS_IF_MONITOR/STAT_GLOBAL_ILLUMINATION", 0x14c}}},
    {F, {{"DATA", 0, 26, 0x0}}},
    {F, {{"VALID", 31, 1, 0x0}}},
    {R, {{"ATIS_IF_MONITOR/STAT_REFRACTORY_CLOCK", 0x150}}},
    {F, {{"DATA", 0, 24, 0x0}}},
    {R, {{"EXT_TRIGGERS/ENABLE", 0x160}}},
    {F, {{"TRIGGER_0", 0, 1, 0x0}}},
    {F, {{"TRIGGER_1", 1, 1, 0x0}}},
    {F, {{"TRIGGER_2", 2, 1, 0x0}}},
    {F, {{"TRIGGER_3", 3, 1, 0x0}}},
    {F, {{"TRIGGER_4", 4, 1, 0x0}}},
    {F, {{"TRIGGER_5", 5, 1, 0x0}}},
    {F, {{"TRIGGER_6", 6, 1, 0x0}}},
    {F, {{"TRIGGER_7", 7, 1, 0x0}}},
    {R, {{"EXT_TRIGGERS/OUT_ENABLE", 0x164}}},
    {F, {{"VALUE", 0, 1, 0x0}}},
    {R, {{"EXT_TRIGGERS/OUT_PULSE_PERIOD", 0x168}}},
    {F, {{"", 0, 32, 0x64}}},
    {R, {{"EXT_TRIGGERS/OUT_PULSE_WIDTH", 0x16c}}},
    {F, {{"", 0, 32, 0x1}}}
    // clang-format on
};
static uint32_t CCAM2SystemMonitorTriggerExtADCSize =
    sizeof(CCAM2SystemMonitorTriggerExtADC) / sizeof(CCAM2SystemMonitorTriggerExtADC[0]);

#endif
