// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_HW_TOP_ATHOS_SW_AUTOGEN_TOP_ATHOS_MEMORY_H_
#define OPENTITAN_HW_TOP_ATHOS_SW_AUTOGEN_TOP_ATHOS_MEMORY_H_

/**
 * @file
 * @brief Assembler-only Top-Specific Definitions.
 *
 * This file contains preprocessor definitions for use within assembly code.
 *
 * These are not shared with C/C++ code because these are only allowed to be
 * preprocessor definitions, no data or type declarations are allowed. The
 * assembler is also stricter about literals (not allowing suffixes for
 * signed/unsigned which are sensible to use for unsigned values in C/C++).
 */

// Include guard for assembler
#ifdef __ASSEMBLER__

/**
 * Memory base address for rom in top earlgrey.
 */
#define TOP_EARLGREY_ROM_BASE_ADDR 0x00008000

/**
 * Memory size for rom in top earlgrey.
 */
#define TOP_EARLGREY_ROM_SIZE_BYTES 0x4000

/**
 * Memory base address for ram_main in top athos.
 */
#define TOP_ATHOS_RAM_MAIN_BASE_ADDR 0x10000000

/**
 * Memory size for ram_main in top athos.
 */
#define TOP_ATHOS_RAM_MAIN_SIZE_BYTES 0x20000

/**
 * Memory base address for ram_ret_aon in top athos.
 */
#define TOP_ATHOS_RAM_RET_AON_BASE_ADDR 0x40600000

/**
 * Memory size for ram_ret_aon in top athos.
 */
#define TOP_ATHOS_RAM_RET_AON_SIZE_BYTES 0x1000

/**
 * Memory base address for eflash in top athos.
 */
#define TOP_ATHOS_EFLASH_BASE_ADDR 0x20000000

/**
 * Memory size for eflash in top athos.
 */
#define TOP_ATHOS_EFLASH_SIZE_BYTES 0x100000


/**
 * Peripheral base address for uart0 in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_UART0_BASE_ADDR 0x40000000
/**
 * Peripheral base address for gpio in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_GPIO_BASE_ADDR 0x40040000
/**
 * Peripheral base address for rv_timer in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_RV_TIMER_BASE_ADDR 0x40100000
/**
 * Peripheral base address for pwrmgr_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_PWRMGR_AON_BASE_ADDR 0x40400000
/**
 * Peripheral base address for rstmgr_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_RSTMGR_AON_BASE_ADDR 0x40410000
/**
 * Peripheral base address for clkmgr_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_CLKMGR_AON_BASE_ADDR 0x40420000
/**
 * Peripheral base address for sysrst_ctrl_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_SYSRST_CTRL_AON_BASE_ADDR 0x40430000
/**
 * Peripheral base address for aon_timer_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_AON_TIMER_AON_BASE_ADDR 0x40470000
/**
 * Peripheral base address for ast in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_AST_BASE_ADDR 0x40480000
/**
 * Peripheral base address for core device on flash_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_FLASH_CTRL_CORE_BASE_ADDR 0x41000000
/**
 * Peripheral base address for prim device on flash_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_FLASH_CTRL_PRIM_BASE_ADDR 0x41008000
/**
 * Peripheral base address for rv_plic in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_RV_PLIC_BASE_ADDR 0x41010000
/**
 * Peripheral base address for regs device on rom_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_ROM_CTRL_REGS_BASE_ADDR 0x411E0000
/**
 * Peripheral base address for rom device on rom_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_ROM_CTRL_ROM_BASE_ADDR 0x8000
#endif  // __ASSEMBLER__

#endif  // OPENTITAN_HW_TOP_ATHOS_SW_AUTOGEN_TOP_ATHOS_MEMORY_H_
