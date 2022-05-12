// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_HW_TOP_ATHOS_SW_AUTOGEN_TOP_ATHOS_H_
#define OPENTITAN_HW_TOP_ATHOS_SW_AUTOGEN_TOP_ATHOS_H_

/**
 * @file
 * @brief Top-specific Definitions
 *
 * This file contains preprocessor and type definitions for use within the
 * device C/C++ codebase.
 *
 * These definitions are for information that depends on the top-specific chip
 * configuration, which includes:
 * - Device Memory Information (for Peripherals and Memory)
 * - PLIC Interrupt ID Names and Source Mappings
 * - Alert ID Names and Source Mappings
 * - Pinmux Pin/Select Names
 * - Power Manager Wakeups
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Peripheral base address for uart0 in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_UART0_BASE_ADDR 0x40000000u

/**
 * Peripheral size for uart0 in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_UART0_BASE_ADDR and
 * `TOP_ATHOS_UART0_BASE_ADDR + TOP_ATHOS_UART0_SIZE_BYTES`.
 */
#define TOP_ATHOS_UART0_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for gpio in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_GPIO_BASE_ADDR 0x40040000u

/**
 * Peripheral size for gpio in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_GPIO_BASE_ADDR and
 * `TOP_ATHOS_GPIO_BASE_ADDR + TOP_ATHOS_GPIO_SIZE_BYTES`.
 */
#define TOP_ATHOS_GPIO_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rv_timer in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_RV_TIMER_BASE_ADDR 0x40100000u

/**
 * Peripheral size for rv_timer in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_RV_TIMER_BASE_ADDR and
 * `TOP_ATHOS_RV_TIMER_BASE_ADDR + TOP_ATHOS_RV_TIMER_SIZE_BYTES`.
 */
#define TOP_ATHOS_RV_TIMER_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for pwrmgr_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_PWRMGR_AON_BASE_ADDR 0x40400000u

/**
 * Peripheral size for pwrmgr_aon in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_PWRMGR_AON_BASE_ADDR and
 * `TOP_ATHOS_PWRMGR_AON_BASE_ADDR + TOP_ATHOS_PWRMGR_AON_SIZE_BYTES`.
 */
#define TOP_ATHOS_PWRMGR_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rstmgr_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_RSTMGR_AON_BASE_ADDR 0x40410000u

/**
 * Peripheral size for rstmgr_aon in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_RSTMGR_AON_BASE_ADDR and
 * `TOP_ATHOS_RSTMGR_AON_BASE_ADDR + TOP_ATHOS_RSTMGR_AON_SIZE_BYTES`.
 */
#define TOP_ATHOS_RSTMGR_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for clkmgr_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_CLKMGR_AON_BASE_ADDR 0x40420000u

/**
 * Peripheral size for clkmgr_aon in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_CLKMGR_AON_BASE_ADDR and
 * `TOP_ATHOS_CLKMGR_AON_BASE_ADDR + TOP_ATHOS_CLKMGR_AON_SIZE_BYTES`.
 */
#define TOP_ATHOS_CLKMGR_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for sysrst_ctrl_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_SYSRST_CTRL_AON_BASE_ADDR 0x40430000u

/**
 * Peripheral size for sysrst_ctrl_aon in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_SYSRST_CTRL_AON_BASE_ADDR and
 * `TOP_ATHOS_SYSRST_CTRL_AON_BASE_ADDR + TOP_ATHOS_SYSRST_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_ATHOS_SYSRST_CTRL_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for aon_timer_aon in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_AON_TIMER_AON_BASE_ADDR 0x40470000u

/**
 * Peripheral size for aon_timer_aon in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_AON_TIMER_AON_BASE_ADDR and
 * `TOP_ATHOS_AON_TIMER_AON_BASE_ADDR + TOP_ATHOS_AON_TIMER_AON_SIZE_BYTES`.
 */
#define TOP_ATHOS_AON_TIMER_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for ast in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_AST_BASE_ADDR 0x40480000u

/**
 * Peripheral size for ast in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_AST_BASE_ADDR and
 * `TOP_ATHOS_AST_BASE_ADDR + TOP_ATHOS_AST_SIZE_BYTES`.
 */
#define TOP_ATHOS_AST_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for core device on flash_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_FLASH_CTRL_CORE_BASE_ADDR 0x41000000u

/**
 * Peripheral size for core device on flash_ctrl in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_FLASH_CTRL_CORE_BASE_ADDR and
 * `TOP_ATHOS_FLASH_CTRL_CORE_BASE_ADDR + TOP_ATHOS_FLASH_CTRL_CORE_SIZE_BYTES`.
 */
#define TOP_ATHOS_FLASH_CTRL_CORE_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for prim device on flash_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_FLASH_CTRL_PRIM_BASE_ADDR 0x41008000u

/**
 * Peripheral size for prim device on flash_ctrl in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_FLASH_CTRL_PRIM_BASE_ADDR and
 * `TOP_ATHOS_FLASH_CTRL_PRIM_BASE_ADDR + TOP_ATHOS_FLASH_CTRL_PRIM_SIZE_BYTES`.
 */
#define TOP_ATHOS_FLASH_CTRL_PRIM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rv_plic in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_RV_PLIC_BASE_ADDR 0x41010000u

/**
 * Peripheral size for rv_plic in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_RV_PLIC_BASE_ADDR and
 * `TOP_ATHOS_RV_PLIC_BASE_ADDR + TOP_ATHOS_RV_PLIC_SIZE_BYTES`.
 */
#define TOP_ATHOS_RV_PLIC_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for regs device on rom_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_ROM_CTRL_REGS_BASE_ADDR 0x411E0000u

/**
 * Peripheral size for regs device on rom_ctrl in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_ROM_CTRL_REGS_BASE_ADDR and
 * `TOP_ATHOS_ROM_CTRL_REGS_BASE_ADDR + TOP_ATHOS_ROM_CTRL_REGS_SIZE_BYTES`.
 */
#define TOP_ATHOS_ROM_CTRL_REGS_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rom device on rom_ctrl in top athos.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_ATHOS_ROM_CTRL_ROM_BASE_ADDR 0x8000u

/**
 * Peripheral size for rom device on rom_ctrl in top athos.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_ATHOS_ROM_CTRL_ROM_BASE_ADDR and
 * `TOP_ATHOS_ROM_CTRL_ROM_BASE_ADDR + TOP_ATHOS_ROM_CTRL_ROM_SIZE_BYTES`.
 */
#define TOP_ATHOS_ROM_CTRL_ROM_SIZE_BYTES 0x4000u


/**
 * Memory base address for ram_main in top athos.
 */
#define TOP_ATHOS_RAM_MAIN_BASE_ADDR 0x10000000u

/**
 * Memory size for ram_main in top athos.
 */
#define TOP_ATHOS_RAM_MAIN_SIZE_BYTES 0x20000u

/**
 * Memory base address for ram_ret_aon in top athos.
 */
#define TOP_ATHOS_RAM_RET_AON_BASE_ADDR 0x40600000u

/**
 * Memory size for ram_ret_aon in top athos.
 */
#define TOP_ATHOS_RAM_RET_AON_SIZE_BYTES 0x1000u

/**
 * Memory base address for eflash in top athos.
 */
#define TOP_ATHOS_EFLASH_BASE_ADDR 0x20000000u

/**
 * Memory size for eflash in top athos.
 */
#define TOP_ATHOS_EFLASH_SIZE_BYTES 0x100000u


/**
 * PLIC Interrupt Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * interrupt.
 */
typedef enum top_athos_plic_peripheral {
  kTopAthosPlicPeripheralUnknown = 0, /**< Unknown Peripheral */
  kTopAthosPlicPeripheralUart0 = 1, /**< uart0 */
  kTopAthosPlicPeripheralGpio = 2, /**< gpio */
  kTopAthosPlicPeripheralRvTimer = 3, /**< rv_timer */
  kTopAthosPlicPeripheralPwrmgrAon = 4, /**< pwrmgr_aon */
  kTopAthosPlicPeripheralSysrstCtrlAon = 5, /**< sysrst_ctrl_aon */
  kTopAthosPlicPeripheralAonTimerAon = 6, /**< aon_timer_aon */
  kTopAthosPlicPeripheralFlashCtrl = 7, /**< flash_ctrl */
  kTopAthosPlicPeripheralLast = 7, /**< \internal Final PLIC peripheral */
} top_athos_plic_peripheral_t;

/**
 * PLIC Interrupt Source.
 *
 * Enumeration of all PLIC interrupt sources. The interrupt sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_athos_plic_irq_id {
  kTopAthosPlicIrqIdNone = 0, /**< No Interrupt */
  kTopAthosPlicIrqIdUart0TxWatermark = 1, /**< uart0_tx_watermark */
  kTopAthosPlicIrqIdUart0RxWatermark = 2, /**< uart0_rx_watermark */
  kTopAthosPlicIrqIdUart0TxEmpty = 3, /**< uart0_tx_empty */
  kTopAthosPlicIrqIdUart0RxOverflow = 4, /**< uart0_rx_overflow */
  kTopAthosPlicIrqIdUart0RxFrameErr = 5, /**< uart0_rx_frame_err */
  kTopAthosPlicIrqIdUart0RxBreakErr = 6, /**< uart0_rx_break_err */
  kTopAthosPlicIrqIdUart0RxTimeout = 7, /**< uart0_rx_timeout */
  kTopAthosPlicIrqIdUart0RxParityErr = 8, /**< uart0_rx_parity_err */
  kTopAthosPlicIrqIdGpioGpio0 = 9, /**< gpio_gpio 0 */
  kTopAthosPlicIrqIdGpioGpio1 = 10, /**< gpio_gpio 1 */
  kTopAthosPlicIrqIdGpioGpio2 = 11, /**< gpio_gpio 2 */
  kTopAthosPlicIrqIdGpioGpio3 = 12, /**< gpio_gpio 3 */
  kTopAthosPlicIrqIdGpioGpio4 = 13, /**< gpio_gpio 4 */
  kTopAthosPlicIrqIdGpioGpio5 = 14, /**< gpio_gpio 5 */
  kTopAthosPlicIrqIdGpioGpio6 = 15, /**< gpio_gpio 6 */
  kTopAthosPlicIrqIdGpioGpio7 = 16, /**< gpio_gpio 7 */
  kTopAthosPlicIrqIdGpioGpio8 = 17, /**< gpio_gpio 8 */
  kTopAthosPlicIrqIdGpioGpio9 = 18, /**< gpio_gpio 9 */
  kTopAthosPlicIrqIdGpioGpio10 = 19, /**< gpio_gpio 10 */
  kTopAthosPlicIrqIdGpioGpio11 = 20, /**< gpio_gpio 11 */
  kTopAthosPlicIrqIdGpioGpio12 = 21, /**< gpio_gpio 12 */
  kTopAthosPlicIrqIdGpioGpio13 = 22, /**< gpio_gpio 13 */
  kTopAthosPlicIrqIdGpioGpio14 = 23, /**< gpio_gpio 14 */
  kTopAthosPlicIrqIdGpioGpio15 = 24, /**< gpio_gpio 15 */
  kTopAthosPlicIrqIdGpioGpio16 = 25, /**< gpio_gpio 16 */
  kTopAthosPlicIrqIdGpioGpio17 = 26, /**< gpio_gpio 17 */
  kTopAthosPlicIrqIdGpioGpio18 = 27, /**< gpio_gpio 18 */
  kTopAthosPlicIrqIdGpioGpio19 = 28, /**< gpio_gpio 19 */
  kTopAthosPlicIrqIdGpioGpio20 = 29, /**< gpio_gpio 20 */
  kTopAthosPlicIrqIdGpioGpio21 = 30, /**< gpio_gpio 21 */
  kTopAthosPlicIrqIdGpioGpio22 = 31, /**< gpio_gpio 22 */
  kTopAthosPlicIrqIdGpioGpio23 = 32, /**< gpio_gpio 23 */
  kTopAthosPlicIrqIdGpioGpio24 = 33, /**< gpio_gpio 24 */
  kTopAthosPlicIrqIdGpioGpio25 = 34, /**< gpio_gpio 25 */
  kTopAthosPlicIrqIdGpioGpio26 = 35, /**< gpio_gpio 26 */
  kTopAthosPlicIrqIdGpioGpio27 = 36, /**< gpio_gpio 27 */
  kTopAthosPlicIrqIdGpioGpio28 = 37, /**< gpio_gpio 28 */
  kTopAthosPlicIrqIdGpioGpio29 = 38, /**< gpio_gpio 29 */
  kTopAthosPlicIrqIdGpioGpio30 = 39, /**< gpio_gpio 30 */
  kTopAthosPlicIrqIdGpioGpio31 = 40, /**< gpio_gpio 31 */
  kTopAthosPlicIrqIdRvTimerTimerExpired0_0 = 41, /**< rv_timer_timer_expired_0_0 */
  kTopAthosPlicIrqIdPwrmgrAonWakeup = 42, /**< pwrmgr_aon_wakeup */
  kTopAthosPlicIrqIdSysrstCtrlAonSysrstCtrl = 43, /**< sysrst_ctrl_aon_sysrst_ctrl */
  kTopAthosPlicIrqIdAonTimerAonWkupTimerExpired = 44, /**< aon_timer_aon_wkup_timer_expired */
  kTopAthosPlicIrqIdAonTimerAonWdogTimerBark = 45, /**< aon_timer_aon_wdog_timer_bark */
  kTopAthosPlicIrqIdFlashCtrlProgEmpty = 46, /**< flash_ctrl_prog_empty */
  kTopAthosPlicIrqIdFlashCtrlProgLvl = 47, /**< flash_ctrl_prog_lvl */
  kTopAthosPlicIrqIdFlashCtrlRdFull = 48, /**< flash_ctrl_rd_full */
  kTopAthosPlicIrqIdFlashCtrlRdLvl = 49, /**< flash_ctrl_rd_lvl */
  kTopAthosPlicIrqIdFlashCtrlOpDone = 50, /**< flash_ctrl_op_done */
  kTopAthosPlicIrqIdFlashCtrlErr = 51, /**< flash_ctrl_err */
  kTopAthosPlicIrqIdLast = 51, /**< \internal The Last Valid Interrupt ID. */
} top_athos_plic_irq_id_t;

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_athos_plic_irq_id_t` to
 * `top_athos_plic_peripheral_t`.
 */
extern const top_athos_plic_peripheral_t
    top_athos_plic_interrupt_for_peripheral[52];

/**
 * PLIC Interrupt Target.
 *
 * Enumeration used to determine which set of IE, CC, threshold registers to
 * access for a given interrupt target.
 */
typedef enum top_athos_plic_target {
  kTopAthosPlicTargetIbex0 = 0, /**< Ibex Core 0 */
  kTopAthosPlicTargetLast = 0, /**< \internal Final PLIC target */
} top_athos_plic_target_t;

/**
 * Alert Handler Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * alert.
 */
typedef enum top_athos_alert_peripheral {
  kTopAthosAlertPeripheralFlashCtrl = 0, /**< flash_ctrl */
  kTopAthosAlertPeripheralRomCtrl = 1, /**< rom_ctrl */
  kTopAthosAlertPeripheralLast = 1, /**< \internal Final Alert peripheral */
} top_athos_alert_peripheral_t;

/**
 * Alert Handler Alert Source.
 *
 * Enumeration of all Alert Handler Alert Sources. The alert sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_athos_alert_id {
  kTopAthosAlertIdFlashCtrlRecovErr = 0, /**< flash_ctrl_recov_err */
  kTopAthosAlertIdFlashCtrlRecovMpErr = 1, /**< flash_ctrl_recov_mp_err */
  kTopAthosAlertIdFlashCtrlRecovEccErr = 2, /**< flash_ctrl_recov_ecc_err */
  kTopAthosAlertIdFlashCtrlFatalIntgErr = 3, /**< flash_ctrl_fatal_intg_err */
  kTopAthosAlertIdRomCtrlFatal = 4, /**< rom_ctrl_fatal */
  kTopAthosAlertIdLast = 4, /**< \internal The Last Valid Alert ID. */
} top_athos_alert_id_t;

/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_athos_alert_id_t` to
 * `top_athos_alert_peripheral_t`.
 */
extern const top_athos_alert_peripheral_t
    top_athos_alert_for_peripheral[5];

#define PINMUX_MIO_PERIPH_INSEL_IDX_OFFSET 2


/**
 * Power Manager Wakeup Signals
 */
typedef enum top_athos_power_manager_wake_ups {
  kTopAthosPowerManagerWakeUpsSysrstCtrlAonGscWk = 0, /**<  */
  kTopAthosPowerManagerWakeUpsAonTimerAonAonTimerWkupReq = 1, /**<  */
  kTopAthosPowerManagerWakeUpsLast = 1, /**< \internal Last valid pwrmgr wakeup signal */
} top_athos_power_manager_wake_ups_t;

/**
 * Reset Manager Software Controlled Resets
 */
typedef enum top_athos_reset_manager_sw_resets {
  kTopAthosResetManagerSwResetsUsb = 0, /**<  */
  kTopAthosResetManagerSwResetsLast = 0, /**< \internal Last valid rstmgr software reset request */
} top_athos_reset_manager_sw_resets_t;

/**
 * Power Manager Reset Request Signals
 */
typedef enum top_athos_power_manager_reset_requests {
  kTopAthosPowerManagerResetRequestsSysrstCtrlAonGscRst = 0, /**<  */
  kTopAthosPowerManagerResetRequestsAonTimerAonAonTimerRstReq = 1, /**<  */
  kTopAthosPowerManagerResetRequestsLast = 1, /**< \internal Last valid pwrmgr reset_request signal */
} top_athos_power_manager_reset_requests_t;

/**
 * Clock Manager Software-Controlled ("Gated") Clocks.
 *
 * The Software has full control over these clocks.
 */
typedef enum top_athos_gateable_clocks {
  kTopAthosGateableClocksIoDiv4Peri = 0, /**< Clock clk_io_div4_peri in group peri */
  kTopAthosGateableClocksLast = 0, /**< \internal Last Valid Gateable Clock */
} top_athos_gateable_clocks_t;

/**
 * Clock Manager Software-Hinted Clocks.
 *
 * The Software has partial control over these clocks. It can ask them to stop,
 * but the clock manager is in control of whether the clock actually is stopped.
 */

// Header Extern Guard
#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // OPENTITAN_HW_TOP_ATHOS_SW_AUTOGEN_TOP_ATHOS_H_
