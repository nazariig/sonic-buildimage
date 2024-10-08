/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-pmd.pl
 *
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 *
 * This file provides RXPMD access functions for BCM56890_A0.
 *
 ******************************************************************************/

#include <sal/sal_types.h>
#include <bcmpkt/bcmpkt_rxpmd.h>
#include <bcmpkt/bcmpkt_rxpmd_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))
/*******************************************************************************
 * SWFORMAT:  RXPMD
 * BLOCKS:
 * SIZE:     576
 ******************************************************************************/
static void bcmpkt_rxpmd_queue_num_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 2, 6, val);
}

static uint32_t bcmpkt_rxpmd_queue_num_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 2, 6);
    return val;
}

static void bcmpkt_rxpmd_pkt_length_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 16, 16, val);
}

static uint32_t bcmpkt_rxpmd_pkt_length_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 16, 16);
    return val;
}

static void bcmpkt_rxpmd_src_port_num_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 23, 9, val);
}

static uint32_t bcmpkt_rxpmd_src_port_num_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 23, 9);
    return val;
}

static void bcmpkt_rxpmd_l3only_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 14, 1, val);
}

static uint32_t bcmpkt_rxpmd_l3only_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 14, 1);
    return val;
}

static void bcmpkt_rxpmd_ip_routed_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 21, 1, val);
}

static uint32_t bcmpkt_rxpmd_ip_routed_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 21, 1);
    return val;
}

static void bcmpkt_rxpmd_uc_sw_copy_dropped_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 15, 1, val);
}

static uint32_t bcmpkt_rxpmd_uc_sw_copy_dropped_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 15, 1);
    return val;
}

static void bcmpkt_rxpmd_switch_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 13, 1, val == 0);
}

static uint32_t bcmpkt_rxpmd_switch_get(uint32_t *data)
{
    uint32_t val;
    val = (WORD_FIELD_GET(data[0], 13, 1) == 0);
    return val;
}

static void bcmpkt_rxpmd_replication_or_nhop_index_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 16, 16, val);
}

static uint32_t bcmpkt_rxpmd_replication_or_nhop_index_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 16, 16);
    return val;
}

static void bcmpkt_rxpmd_mpb_flex_data_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 1, 6, val);
}

static uint32_t bcmpkt_rxpmd_mpb_flex_data_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 1, 6);
    return val;
}

static void bcmpkt_rxpmd_int_cn_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 16, 2, val);
}

static uint32_t bcmpkt_rxpmd_int_cn_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 16, 2);
    return val;
}

static void bcmpkt_rxpmd_cng_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 18, 2, val);
}

static uint32_t bcmpkt_rxpmd_cng_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 18, 2);
    return val;
}

static void bcmpkt_rxpmd_egr_zone_remap_ctrl_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 9, 4, val);
}

static uint32_t bcmpkt_rxpmd_egr_zone_remap_ctrl_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 9, 4);
    return val;
}

static void bcmpkt_rxpmd_dma_header_version_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 0, 2, val);
}

static uint32_t bcmpkt_rxpmd_dma_header_version_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 0, 2);
    return val;
}

static void bcmpkt_rxpmd_multicast_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 20, 1, val);
}

static uint32_t bcmpkt_rxpmd_multicast_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 20, 1);
    return val;
}

static void bcmpkt_rxpmd_copy_to_cpu_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 22, 1, val);
}

static uint32_t bcmpkt_rxpmd_copy_to_cpu_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 22, 1);
    return val;
}

static void bcmpkt_rxpmd_truncate_cpu_copy_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 8, 1, val);
}

static uint32_t bcmpkt_rxpmd_truncate_cpu_copy_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 8, 1);
    return val;
}

static void bcmpkt_rxpmd_dop_trigger_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 7, 1, val);
}

static uint32_t bcmpkt_rxpmd_dop_trigger_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 7, 1);
    return val;
}

static void bcmpkt_rxpmd_eparse_extract_offsets_3_0_or_mirror_encap_index_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 8, 4, val);
}

static uint32_t bcmpkt_rxpmd_eparse_extract_offsets_3_0_or_mirror_encap_index_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 8, 4);
    return val;
}

static void bcmpkt_rxpmd_eparse_extract_offsets_6_4_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 12, 3, val);
}

static uint32_t bcmpkt_rxpmd_eparse_extract_offsets_6_4_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 12, 3);
    return val;
}

static void bcmpkt_rxpmd_arc_id_lo_set(uint32_t *data, uint32_t val)
{
    data[2] = val;
}

static uint32_t bcmpkt_rxpmd_arc_id_lo_get(uint32_t *data)
{
    uint32_t val;
    val = data[2];
    return val;
}

static void bcmpkt_rxpmd_arc_id_hi_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 0, 16, val);
}

static uint32_t bcmpkt_rxpmd_arc_id_hi_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 0, 16);
    return val;
}

static uint32_t bcmpkt_rxpmd_i_size_get(uint32_t *data, uint32_t **addr)
{
    return 18;
}

static uint32_t bcmpkt_rxpmd_i_flex_data_get(uint32_t *data, uint32_t **addr)
{
    *addr = data + 4;
    return 14;
}

void bcm56890_a0_rx_reason_encode(const bcmpkt_rx_reasons_t *reasons, uint32_t *data)
{
}

void bcm56890_a0_rx_reason_decode(const uint32_t *data, bcmpkt_rx_reasons_t *reasons)
{
}

void bcm56890_a0_ep_rx_reason_encode(const bcmpkt_rx_reasons_t *reasons, uint32_t *data)
{
}

void bcm56890_a0_ep_rx_reason_decode(const uint32_t *data, bcmpkt_rx_reasons_t *reasons)
{
}

const bcmpkt_rxpmd_fget_t bcm56890_a0_rxpmd_fget = {
    {
        NULL,
        bcmpkt_rxpmd_queue_num_get,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_pkt_length_get,
        bcmpkt_rxpmd_src_port_num_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_l3only_get,
        bcmpkt_rxpmd_ip_routed_get,
        NULL,
        NULL,
        bcmpkt_rxpmd_uc_sw_copy_dropped_get,
        bcmpkt_rxpmd_switch_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_replication_or_nhop_index_get,
        NULL,
        NULL,
        bcmpkt_rxpmd_mpb_flex_data_type_get,
        bcmpkt_rxpmd_int_cn_get,
        bcmpkt_rxpmd_cng_get,
        bcmpkt_rxpmd_egr_zone_remap_ctrl_get,
        bcmpkt_rxpmd_dma_header_version_get,
        bcmpkt_rxpmd_multicast_get,
        bcmpkt_rxpmd_copy_to_cpu_get,
        bcmpkt_rxpmd_truncate_cpu_copy_get,
        NULL,
        bcmpkt_rxpmd_dop_trigger_get,
        bcmpkt_rxpmd_eparse_extract_offsets_3_0_or_mirror_encap_index_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_eparse_extract_offsets_6_4_get,
        NULL,
        bcmpkt_rxpmd_arc_id_lo_get,
        bcmpkt_rxpmd_arc_id_hi_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_rxpmd_fset_t bcm56890_a0_rxpmd_fset = {
    {
        NULL,
        bcmpkt_rxpmd_queue_num_set,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_pkt_length_set,
        bcmpkt_rxpmd_src_port_num_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_l3only_set,
        bcmpkt_rxpmd_ip_routed_set,
        NULL,
        NULL,
        bcmpkt_rxpmd_uc_sw_copy_dropped_set,
        bcmpkt_rxpmd_switch_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_replication_or_nhop_index_set,
        NULL,
        NULL,
        bcmpkt_rxpmd_mpb_flex_data_type_set,
        bcmpkt_rxpmd_int_cn_set,
        bcmpkt_rxpmd_cng_set,
        bcmpkt_rxpmd_egr_zone_remap_ctrl_set,
        bcmpkt_rxpmd_dma_header_version_set,
        bcmpkt_rxpmd_multicast_set,
        bcmpkt_rxpmd_copy_to_cpu_set,
        bcmpkt_rxpmd_truncate_cpu_copy_set,
        NULL,
        bcmpkt_rxpmd_dop_trigger_set,
        bcmpkt_rxpmd_eparse_extract_offsets_3_0_or_mirror_encap_index_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_eparse_extract_offsets_6_4_set,
        NULL,
        bcmpkt_rxpmd_arc_id_lo_set,
        bcmpkt_rxpmd_arc_id_hi_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_rxpmd_figet_t bcm56890_a0_rxpmd_figet = {
    {
        bcmpkt_rxpmd_i_size_get,
        NULL,
        NULL,
        bcmpkt_rxpmd_i_flex_data_get
    }
};

static shr_enum_map_t bcm56890_a0_rxpmd_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56890_a0_rxpmd_view_infos[BCMPKT_RXPMD_FID_COUNT] = {
     -2, -1, -2, -2, -2, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -2, -2, -1, -1, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -2,
     -2, -2, -2, -2, -2, -1, -2, -1, -1, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2,
};


void bcm56890_a0_rxpmd_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56890_a0_rxpmd_view_infos;
    info->view_types = bcm56890_a0_rxpmd_view_types;
    info->view_type_get = NULL;
}
