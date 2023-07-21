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

#ifndef METAVISION_HAL_CCAM3_SINGLE_GEN31_SENSORIF_REGISTERMAP_H
#define METAVISION_HAL_CCAM3_SINGLE_GEN31_SENSORIF_REGISTERMAP_H

static RegmapElement ccam3_single_gen31_Gen31SensorIFRegisterMap[] = {
    // clang-format off
    {R, {{"GEN31/global_ctrl", 0x0}}},
    {F, {{"td_couple_ctrl", 0, 1, 0x0}}},
    {F, {{"sw_global_en", 1, 1, 0x0}}},
    {F, {{"bypass_digital_readout_ctrl", 2, 1, 0x0}}},
    {F, {{"bgen_rstn", 3, 1, 0x0}}},
    {F, {{"bgen_en", 4, 1, 0x0}}},
    {R, {{"GEN31/roi_ctrl", 0x4}}},
    {F, {{"roi_em_en", 0, 1, 0x1}}},
    {F, {{"roi_td_en", 1, 1, 0x1}}},
    {F, {{"roi_td_rstn", 3, 1, 0x1}}},
    {F, {{"roi_em_shadow_trigger", 4, 1, 0x0}}},
    {F, {{"roi_td_shadow_trigger", 5, 1, 0x0}}},
    {F, {{"roi_em_scan_en", 7, 1, 0x0}}},
    {F, {{"roi_td_scan_en", 8, 1, 0x0}}},
    {R, {{"GEN31/readout_ctrl", 0x8}}},
    {F, {{"ro_delay_rstn", 0, 1, 0x1}}},
    {F, {{"ro_interface_x_rstn", 1, 1, 0x1}}},
    {F, {{"ro_latch_y_rstn", 2, 1, 0x1}}},
    {F, {{"ro_ack_array_rstn", 3, 1, 0x1}}},
    {F, {{"ro_ctrl_rstn", 4, 1, 0x1}}},
    {F, {{"ro_latch_dum_connect_ctrl", 5, 1, 0x1}}},
    {F, {{"ro_latch_dum_rstn", 6, 1, 0x1}}},
    {F, {{"ro_pixel_dum_rstn", 7, 1, 0x1}}},
    {F, {{"ro_interface_y_rstn", 8, 1, 0x1}}},
    {F, {{"ro_latch_x_rstn", 9, 1, 0x1}}},
    {F, {{"ro_stat_x_ctrl", 10, 1, 0x0}}},
    {F, {{"ro_act_pux_ctrl", 11, 3, 0x1}}},
    {F, {{"ro_stat_y_ctrl", 14, 1, 0x0}}},
    {F, {{"ro_pipeline_ctrl", 16, 1, 0x0}}},
    {F, {{"ro_act_pdy_ctrl", 17, 3, 0x0}}},
    {F, {{"ro_act_pdx_ctrl", 20, 3, 0x0}}},
    {F, {{"ro_ack_y_ctrl", 23, 1, 0x0}}},
    {F, {{"ro_td_inv_req_ctrl", 26, 1, 0x0}}},
    {F, {{"ro_td_inv_pol_ctrl", 27, 1, 0x0}}},
    {F, {{"ro_td_inv_ack_ctrl", 28, 1, 0x0}}},
    {F, {{"ro_act_puy_ctrl", 29, 3, 0x2}}},
    {R, {{"GEN31/test_bus_ctrl", 0xc}}},
    {F, {{"tp_sel_test_photodiode", 0, 1, 0x0}}},
    {F, {{"tp_diode", 1, 1, 0x0}}},
    {F, {{"tp_diode_tl", 2, 1, 0x0}}},
    {F, {{"tp_diode_tr", 3, 1, 0x0}}},
    {F, {{"tp_diode_br", 4, 1, 0x0}}},
    {F, {{"tp_diode_bl", 5, 1, 0x0}}},
    {F, {{"tp_photodiode_en", 6, 1, 0x1}}},
    {F, {{"tp_en", 7, 1, 0x0}}},
    {F, {{"tbus_sel_tpa1", 8, 4, 0x0}}},
    {F, {{"tbus_sel_tpa2", 12, 4, 0x0}}},
    {F, {{"tbus_sel_tpa3", 16, 4, 0x0}}},
    {F, {{"tbus_sel_tpa4", 20, 4, 0x0}}},
    {F, {{"tbus_sel_tpd1", 24, 4, 0x0}}},
    {A, {{"TD_FIFO_FULL", 0}}},
    {A, {{"SPI_ERROR", 5}}},
    {A, {{"ARB_VLD", 1}}},
    {A, {{"OOR_VLD", 3}}},
    {A, {{"ICN_REQ_X", 2}}},
    {A, {{"EVT_PERIOD", 4}}},
    {F, {{"tbus_sel_tpd2", 28, 4, 0x0}}},
    {A, {{"ARB_SEL", 5}}},
    {A, {{"ARB_RDY", 1}}},
    {A, {{"EM_FIFO_FULL", 0}}},
    {A, {{"ICN_REQ_Y", 2}}},
    {A, {{"OOR_TYP", 3}}},
    {R, {{"GEN31/clk_sync_ctrl", 0x10}}},
    {F, {{"clk_diff_hi_cm_ctrl", 1, 1, 0x1}}},
    {F, {{"clk_diff_iout_x2_ctrl", 2, 1, 0x1}}},
    {F, {{"clk_dc_up_ctrl", 3, 1, 0x0}}},
    {R, {{"GEN31/lifo_ctrl", 0x14}}},
    {F, {{"lifo_counter", 0, 26, 0x0}}},
    {F, {{"lifo_counter_valid", 29, 1, 0x0}}},
    {F, {{"lifo_cnt_en", 30, 1, 0x0}}},
    {F, {{"lifo_en", 31, 1, 0x0}}},
    {R, {{"GEN31/chip_id", 0x18}}},
    {F, {{"chip_id", 0, 32, 0x90200c03}}},
    {R, {{"GEN31/spare_ctrl", 0x1c}}},
    {F, {{"spare0", 0, 1, 0x0}}},
    {F, {{"spare1", 1, 1, 0x0}}},
    {F, {{"spare2", 2, 1, 0x0}}},
    {F, {{"spare3", 3, 1, 0x0}}},
    {F, {{"spare7downto4", 4, 4, 0x0}}},
    {F, {{"em_shutter", 8, 1, 0x0}}},
    {F, {{"spare21downto9", 9, 13, 0x0}}},
    {F, {{"rfeed_d_ctrl", 22, 1, 0x0}}},
    {F, {{"rfeed_a_ctrl", 23, 1, 0x0}}},
    {F, {{"tp_refr_clk_en", 24, 1, 0x0}}},
    {F, {{"tp_dark_en", 25, 1, 0x0}}},
    {F, {{"tp_qe_en", 26, 1, 0x0}}},
    {F, {{"spare27", 27, 1, 0x0}}},
    {F, {{"ro_top_act_pu_en", 28, 1, 0x0}}},
    {F, {{"spares31downto29", 29, 3, 0x0}}},
    {R, {{"GEN31/oor_ctrl", 0x20}}},
    {F, {{"oor_en", 0, 1, 0x0}}},
    {F, {{"oor_rm_td", 1, 1, 0x0}}},
    {F, {{"oor_rm_em", 2, 1, 0x0}}},
    {R, {{"GEN31/td_oor_cnt", 0x24}}},
    {F, {{"td_oor_cnt", 0, 32, 0x0}}},
    {R, {{"GEN31/em_oor_cnt", 0x28}}},
    {F, {{"em_oor_cnt", 0, 32, 0x0}}},
    {R, {{"GEN31/td_oor_addr", 0x2c}}},
    {F, {{"td_oor_addr_x", 0, 10, 0x0}}},
    {F, {{"td_oor_addr_y", 10, 9, 0x0}}},
    {F, {{"td_oor_addr_p", 19, 1, 0x0}}},
    {R, {{"GEN31/em_oor_addr", 0x30}}},
    {F, {{"em_oor_addr_x", 0, 10, 0x0}}},
    {F, {{"em_oor_addr_y", 10, 9, 0x0}}},
    {F, {{"em_oor_addr_p", 19, 1, 0x0}}},
    {R, {{"GEN31/acr_ctrl", 0x34}}},
    {F, {{"acr_en", 0, 1, 0x1}}},
    {F, {{"version_override", 1, 1, 0x0}}},
    {F, {{"version_id", 2, 1, 0x0}}},
    {A, {{"FORCED_VERSION_IS_TD", 0}}},
    {A, {{"FORCED_VERSION_IS_ATIS", 1}}},
    {R, {{"GEN31/clk_out_ctrl", 0x38}}},
    {F, {{"clk_out_en", 0, 1, 0x0}}},
    {F, {{"clk_gate_bypass", 1, 1, 0x0}}},
    {F, {{"clk_out_pol", 2, 1, 0x0}}},
    {F, {{"clk_timeout", 3, 8, 0x0}}},
    {R, {{"GEN31/stst_ctrl", 0x3c}}},
    {F, {{"stst_en", 0, 2, 0x0}}},
    {A, {{"STST_RAND", 3}}},
    {A, {{"STST_INCR", 2}}},
    {A, {{"STST_DISABLE", 0}}},
    {A, {{"STST_LFSR", 1}}},
    {F, {{"stst_div_factor", 2, 10, 0x0}}},
    {R, {{"GEN31/rob_ctrl", 0x40}}},
    {F, {{"ro_dual_ctrl", 0, 1, 0x0}}},
    {F, {{"ro_test_mode_ctrl", 1, 1, 0x0}}},
    {F, {{"ro_test_mode_sel_ctrl", 2, 1, 0x0}}},
    {F, {{"ro_addr_y_stat_crtl", 3, 1, 0x0}}},
    {F, {{"ro_addr_x_stat_crtl", 4, 1, 0x0}}},
    {F, {{"ro_stat_req_x_ctrl", 5, 1, 0x0}}},
    {F, {{"ro_stat_pol_ctrl", 6, 1, 0x0}}},
    {F, {{"ro_td_req_lat_ctrl", 7, 3, 0x2}}},
    {F, {{"ro_td_ack_lat_ctrl", 10, 3, 0x1}}},
    {F, {{"ro_em_addr_y_stat_ctrl", 13, 1, 0x0}}},
    {F, {{"ro_em_addr_x_stat_ctrl", 14, 1, 0x0}}},
    {F, {{"ro_em_stat_req_x_ctrl", 15, 1, 0x0}}},
    {F, {{"ro_em_stat_pol_ctrl", 16, 1, 0x0}}},
    {F, {{"ro_em_req_lat_ctrl", 17, 3, 0x2}}},
    {F, {{"ro_em_ack_lat_ctrl", 20, 3, 0x1}}},
    {R, {{"GEN31/roe_ctrl", 0x44}}},
    {F, {{"ro_em_delay_rstn", 0, 1, 0x1}}},
    {F, {{"ro_em_interface_x_rstn", 1, 1, 0x1}}},
    {F, {{"ro_em_latch_y_rstn", 2, 1, 0x1}}},
    {F, {{"ro_em_ack_array_rstn", 3, 1, 0x1}}},
    {F, {{"ro_em_ctrl_rstn", 4, 1, 0x1}}},
    {F, {{"ro_em_latch_connect_to", 5, 1, 0x1}}},
    {F, {{"ro_em_latch_dum_rstn", 6, 1, 0x1}}},
    {F, {{"ro_em_pixel_dum_rstn", 7, 1, 0x1}}},
    {F, {{"ro_em_interface_y_rstn", 8, 1, 0x1}}},
    {F, {{"ro_em_latch_x_rstn", 9, 1, 0x1}}},
    {F, {{"ro_em_stat_x_ctrl", 10, 1, 0x0}}},
    {F, {{"ro_em_act_pux_ctrl", 11, 3, 0x0}}},
    {F, {{"ro_em_stat_y_ctrl", 14, 1, 0x0}}},
    {F, {{"ro_em_pipeline_ctrl", 16, 1, 0x0}}},
    {F, {{"ro_em_act_pdy_ctrl", 17, 3, 0x0}}},
    {F, {{"ro_em_act_pdx_ctrl", 20, 3, 0x0}}},
    {F, {{"ro_em_ack_y_ctrl", 23, 1, 0x0}}},
    {F, {{"ro_em_inv_req_ctrl", 26, 1, 0x0}}},
    {F, {{"ro_em_inv_pol_ctrl", 27, 1, 0x0}}},
    {F, {{"ro_em_inv_ack_ctrl", 28, 1, 0x0}}},
    {F, {{"ro_em_act_puy_ctrl", 29, 3, 0x2}}},
    {R, {{"GEN31/nfl_ctrl", 0x48}}},
    {F, {{"nfl_en", 0, 1, 0x0}}},
    {F, {{"pre_cnt_thresh", 1, 7, 0x64}}},
    {R, {{"GEN31/nfl_thresh", 0x4c}}},
    {F, {{"evt_thresh", 0, 14, 0x32}}},
    {F, {{"period_cnt_thresh", 14, 10, 0x64}}},
    {R, {{"GEN31/nfl_cnt", 0x50}}},
    {F, {{"evt_thresh", 0, 14, 0x0}}},
    {R, {{"GEN31/bgen_00", 0x100}}},
    {F, {{"bias_vdac_val", 0, 8, 0x7f}}},
    {F, {{"bias_idac_val", 8, 13, 0x3e1}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_01", 0x104}}},
    {F, {{"bias_vdac_val", 0, 8, 0x7f}}},
    {F, {{"bias_idac_val", 8, 13, 0x3e1}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_02", 0x108}}},
    {F, {{"bias_vdac_val", 0, 8, 0x9b}}},
    {F, {{"bias_idac_val", 8, 13, 0x62}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_03", 0x10c}}},
    {F, {{"bias_vdac_val", 0, 8, 0xaa}}},
    {F, {{"bias_idac_val", 8, 13, 0x1b}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_04", 0x110}}},
    {F, {{"bias_vdac_val", 0, 8, 0x8d}}},
    {F, {{"bias_idac_val", 8, 13, 0x14d}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_05", 0x114}}},
    {F, {{"bias_vdac_val", 0, 8, 0x71}}},
    {F, {{"bias_idac_val", 8, 13, 0xdb7}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_06", 0x118}}},
    {F, {{"bias_vdac_val", 0, 8, 0x8d}}},
    {F, {{"bias_idac_val", 8, 13, 0x14d}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_07", 0x11c}}},
    {F, {{"bias_vdac_val", 0, 8, 0x8d}}},
    {F, {{"bias_idac_val", 8, 13, 0x14d}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_08", 0x120}}},
    {F, {{"bias_vdac_val", 0, 8, 0x3f}}},
    {F, {{"bias_idac_val", 8, 13, 0x2c}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_09", 0x124}}},
    {F, {{"bias_vdac_val", 0, 8, 0x37}}},
    {F, {{"bias_idac_val", 8, 13, 0x54}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_10", 0x128}}},
    {F, {{"bias_vdac_val", 0, 8, 0xb8}}},
    {F, {{"bias_idac_val", 8, 13, 0x166c}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_11", 0x12c}}},
    {F, {{"bias_vdac_val", 0, 8, 0x0}}},
    {F, {{"bias_idac_val", 8, 13, 0x0}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_12", 0x130}}},
    {F, {{"bias_vdac_val", 0, 8, 0xf8}}},
    {F, {{"bias_idac_val", 8, 13, 0x0}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_13", 0x134}}},
    {F, {{"bias_vdac_val", 0, 8, 0x2a}}},
    {F, {{"bias_idac_val", 8, 13, 0x2ce}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_14", 0x138}}},
    {F, {{"bias_vdac_val", 0, 8, 0x2f}}},
    {F, {{"bias_idac_val", 8, 13, 0x800}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_15", 0x13c}}},
    {F, {{"bias_vdac_val", 0, 8, 0x21}}},
    {F, {{"bias_idac_val", 8, 13, 0x83}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_16", 0x140}}},
    {F, {{"bias_vdac_val", 0, 8, 0xe3}}},
    {F, {{"bias_idac_val", 8, 13, 0x4}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_17", 0x144}}},
    {F, {{"bias_vdac_val", 0, 8, 0xf1}}},
    {F, {{"bias_idac_val", 8, 13, 0x0}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_18", 0x148}}},
    {F, {{"bias_vdac_val", 0, 8, 0x8d}}},
    {F, {{"bias_idac_val", 8, 13, 0x14d}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x1}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_19", 0x14c}}},
    {F, {{"bias_vdac_val", 0, 8, 0x1f}}},
    {F, {{"bias_idac_val", 8, 13, 0x57}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_20", 0x150}}},
    {F, {{"bias_vdac_val", 0, 8, 0x34}}},
    {F, {{"bias_idac_val", 8, 13, 0x125c}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_21", 0x154}}},
    {F, {{"bias_vdac_val", 0, 8, 0x2a}}},
    {F, {{"bias_idac_val", 8, 13, 0x2ce}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_22", 0x158}}},
    {F, {{"bias_vdac_val", 0, 8, 0xd6}}},
    {F, {{"bias_idac_val", 8, 13, 0x36}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_23", 0x15c}}},
    {F, {{"bias_vdac_val", 0, 8, 0xb1}}},
    {F, {{"bias_idac_val", 8, 13, 0x345}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_24", 0x160}}},
    {F, {{"bias_vdac_val", 0, 8, 0xd4}}},
    {F, {{"bias_idac_val", 8, 13, 0x4f}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_25", 0x164}}},
    {F, {{"bias_vdac_val", 0, 8, 0xd4}}},
    {F, {{"bias_idac_val", 8, 13, 0x2}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x1}}},
    {F, {{"bias_polarity", 29, 1, 0x0}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/bgen_26", 0x168}}},
    {F, {{"bias_vdac_val", 0, 8, 0x54}}},
    {F, {{"bias_idac_val", 8, 13, 0x132}}},
    {F, {{"bias_internal_buffer", 21, 6, 0x8}}},
    {F, {{"bias_type", 27, 1, 0x0}}},
    {F, {{"bias_mode", 28, 1, 0x0}}},
    {F, {{"bias_polarity", 29, 1, 0x1}}},
    {F, {{"bias_enable", 30, 1, 0x1}}},
    {F, {{"bias_pad_enable", 31, 1, 0x0}}},
    {R, {{"GEN31/td_roi_x00", 0x200}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x01", 0x204}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x02", 0x208}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x03", 0x20c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x04", 0x210}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x05", 0x214}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x06", 0x218}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x07", 0x21c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x08", 0x220}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x09", 0x224}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x10", 0x228}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x11", 0x22c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x12", 0x230}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x13", 0x234}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x14", 0x238}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x15", 0x23c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x16", 0x240}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x17", 0x244}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x18", 0x248}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x19", 0x24c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_x20", 0x250}}},
    {F, {{"val", 0, 4, 0x0}}},
    {R, {{"GEN31/td_roi_y00", 0x300}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y01", 0x304}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y02", 0x308}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y03", 0x30c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y04", 0x310}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y05", 0x314}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y06", 0x318}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y07", 0x31c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y08", 0x320}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y09", 0x324}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y10", 0x328}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y11", 0x32c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y12", 0x330}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y13", 0x334}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y14", 0x338}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/td_roi_y15", 0x33c}}},
    {F, {{"val", 0, 4, 0x0}}},
    {R, {{"GEN31/em_roi_x00", 0x400}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x01", 0x404}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x02", 0x408}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x03", 0x40c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x04", 0x410}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x05", 0x414}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x06", 0x418}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x07", 0x41c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x08", 0x420}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x09", 0x424}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x10", 0x428}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x11", 0x42c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x12", 0x430}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x13", 0x434}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x14", 0x438}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x15", 0x43c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x16", 0x440}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x17", 0x444}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x18", 0x448}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x19", 0x44c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_x20", 0x450}}},
    {F, {{"val", 0, 4, 0x0}}},
    {R, {{"GEN31/em_roi_y00", 0x500}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y01", 0x504}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y02", 0x508}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y03", 0x50c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y04", 0x510}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y05", 0x514}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y06", 0x518}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y07", 0x51c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y08", 0x520}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y09", 0x524}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y10", 0x528}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y11", 0x52c}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y12", 0x530}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y13", 0x534}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y14", 0x538}}},
    {F, {{"val", 0, 32, 0xffffffff}}},
    {R, {{"GEN31/em_roi_y15", 0x53c}}},
    {F, {{"val", 0, 4, 0x0}}},
    {R, {{"GEN31_IF/TEST_PATTERN_CONTROL", 0x540}}},
    {F, {{"ENABLE", 0, 1, 0x0}}},
    {F, {{"TYPE", 4, 1, 0x0}}},
    {F, {{"PIXEL_TYPE", 8, 1, 0x0}}},
    {F, {{"PIXEL_POLARITY", 12, 1, 0x0}}},
    {R, {{"GEN31_IF/TEST_PATTERN_N_PERIOD", 0x544}}},
    {F, {{"VALID_RATIO", 0, 10, 0x0}}},
    {F, {{"LENGTH", 16, 16, 0x0}}},
    {R, {{"GEN31_IF/TEST_PATTERN_P_PERIOD", 0x548}}},
    {F, {{"VALID_RATIO", 0, 10, 0x0}}},
    {F, {{"LENGTH", 16, 16, 0x0}}},
    {R, {{"GEN31_IF/CONTROL", 0x54c}}},
    {F, {{"SELF_ACK", 0, 1, 0x0}}},
    {F, {{"SENSOR_CLK_EN", 1, 1, 0x1}}},
    {F, {{"EM_RSTN_TRIGGER_EN", 4, 1, 0x0}}},
    {R, {{"GEN31_IF/TRIGGERS", 0x550}}},
    {F, {{"RESET_AFIFO", 0, 1, 0x0}}},
    {R, {{"GEN31_IF/EM_TRIGGER_PATTERN", 0x554}}},
    {F, {{"ENABLE", 0, 1, 0x0}}},
    {F, {{"INIT", 1, 1, 0x0}}},
    {F, {{"START", 2, 1, 0x0}}},
    {F, {{"BUSY", 3, 1, 0x0}}},
    {R, {{"GEN31_IODELAY/CONTROL", 0x558}}},
    {F, {{"SENSOR_READY_FF", 0, 1, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_DEC", 0x55c}}},
    {F, {{"DX", 0, 10, 0x0}}},
    {F, {{"DY", 10, 9, 0x0}}},
    {F, {{"POLARITY", 19, 1, 0x0}}},
    {F, {{"TYPE", 20, 1, 0x0}}},
    {F, {{"VALID", 21, 1, 0x0}}},
    {F, {{"READY", 22, 1, 0x0}}},
    {F, {{"CLK", 23, 1, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_INC", 0x560}}},
    {F, {{"DX", 0, 10, 0x0}}},
    {F, {{"DY", 10, 9, 0x0}}},
    {F, {{"POLARITY", 19, 1, 0x0}}},
    {F, {{"TYPE", 20, 1, 0x0}}},
    {F, {{"VALID", 21, 1, 0x0}}},
    {F, {{"READY", 22, 1, 0x0}}},
    {F, {{"CLK", 23, 1, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_LOAD", 0x564}}},
    {F, {{"DX", 0, 10, 0x0}}},
    {F, {{"DY", 10, 9, 0x0}}},
    {F, {{"POLARITY", 19, 1, 0x0}}},
    {F, {{"TYPE", 20, 1, 0x0}}},
    {F, {{"VALID", 21, 1, 0x0}}},
    {F, {{"READY", 22, 1, 0x0}}},
    {F, {{"CLK", 23, 1, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_SET_VALUE_0", 0x568}}},
    {F, {{"TYPE", 0, 5, 0x0}}},
    {F, {{"VALID", 8, 5, 0x0}}},
    {F, {{"READY", 16, 5, 0x1}}},
    {F, {{"CLK", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_SET_VALUE_1", 0x56c}}},
    {F, {{"POLARITY", 0, 5, 0x0}}},
    {F, {{"DX_0", 8, 5, 0x0}}},
    {F, {{"DX_1", 16, 5, 0x0}}},
    {F, {{"DX_2", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_SET_VALUE_2", 0x570}}},
    {F, {{"DX_3", 0, 5, 0x0}}},
    {F, {{"DX_4", 8, 5, 0x0}}},
    {F, {{"DX_5", 16, 5, 0x0}}},
    {F, {{"DX_6", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_SET_VALUE_3", 0x574}}},
    {F, {{"DX_7", 0, 5, 0x0}}},
    {F, {{"DX_8", 8, 5, 0x0}}},
    {F, {{"DX_9", 16, 5, 0x0}}},
    {F, {{"DY_0", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_SET_VALUE_4", 0x578}}},
    {F, {{"DY_1", 0, 5, 0x0}}},
    {F, {{"DY_2", 8, 5, 0x0}}},
    {F, {{"DY_3", 16, 5, 0x0}}},
    {F, {{"DY_4", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_SET_VALUE_5", 0x57c}}},
    {F, {{"DY_5", 0, 5, 0x0}}},
    {F, {{"DY_6", 8, 5, 0x0}}},
    {F, {{"DY_7", 16, 5, 0x0}}},
    {F, {{"DY_8", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_GET_VALUE_0", 0x580}}},
    {F, {{"TYPE", 0, 5, 0x0}}},
    {F, {{"VALID", 8, 5, 0x0}}},
    {F, {{"READY", 16, 5, 0x1}}},
    {F, {{"CLK", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_GET_VALUE_1", 0x584}}},
    {F, {{"POLARITY", 0, 5, 0x0}}},
    {F, {{"DX_0", 8, 5, 0x0}}},
    {F, {{"DX_1", 16, 5, 0x0}}},
    {F, {{"DX_2", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_GET_VALUE_2", 0x588}}},
    {F, {{"DX_3", 0, 5, 0x0}}},
    {F, {{"DX_4", 8, 5, 0x0}}},
    {F, {{"DX_5", 16, 5, 0x0}}},
    {F, {{"DX_6", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_GET_VALUE_3", 0x58c}}},
    {F, {{"DX_7", 0, 5, 0x0}}},
    {F, {{"DX_8", 8, 5, 0x0}}},
    {F, {{"DX_9", 16, 5, 0x0}}},
    {F, {{"DY_0", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_GET_VALUE_4", 0x590}}},
    {F, {{"DY_1", 0, 5, 0x0}}},
    {F, {{"DY_2", 8, 5, 0x0}}},
    {F, {{"DY_3", 16, 5, 0x0}}},
    {F, {{"DY_4", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/IODELAY_GET_VALUE_5", 0x594}}},
    {F, {{"DY_5", 0, 5, 0x0}}},
    {F, {{"DY_6", 8, 5, 0x0}}},
    {F, {{"DY_7", 16, 5, 0x0}}},
    {F, {{"DY_8", 24, 5, 0x0}}},
    {R, {{"GEN31_IODELAY/SAMPLE_CLK_EDGE", 0x598}}},
    {F, {{"DX", 0, 10, 0x0}}},
    {F, {{"DY", 10, 9, 0x0}}},
    {F, {{"TYPE", 19, 1, 0x0}}},
    {F, {{"POLARITY", 20, 1, 0x0}}},
    {F, {{"VALID", 21, 1, 0x0}}}
    // clang-format on
};
static uint32_t ccam3_single_gen31_Gen31SensorIFRegisterMapSize =
    sizeof(ccam3_single_gen31_Gen31SensorIFRegisterMap) / sizeof(ccam3_single_gen31_Gen31SensorIFRegisterMap[0]);

#endif // METAVISION_HAL_CCAM3_SINGLE_GEN31_SENSORIF_REGISTERMAP_H