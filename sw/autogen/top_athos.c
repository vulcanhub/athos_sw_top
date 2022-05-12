// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "top_athos_sw/sw/autogen/top_athos.h"

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_athos_plic_irq_id_t` to
 * `top_athos_plic_peripheral_t`.
 */
const top_athos_plic_peripheral_t
    top_athos_plic_interrupt_for_peripheral[52] = {
  [kTopAthosPlicIrqIdNone] = kTopAthosPlicPeripheralUnknown,
  [kTopAthosPlicIrqIdUart0TxWatermark] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0RxWatermark] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0TxEmpty] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0RxOverflow] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0RxFrameErr] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0RxBreakErr] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0RxTimeout] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdUart0RxParityErr] = kTopAthosPlicPeripheralUart0,
  [kTopAthosPlicIrqIdGpioGpio0] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio1] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio2] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio3] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio4] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio5] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio6] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio7] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio8] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio9] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio10] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio11] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio12] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio13] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio14] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio15] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio16] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio17] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio18] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio19] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio20] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio21] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio22] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio23] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio24] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio25] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio26] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio27] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio28] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio29] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio30] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdGpioGpio31] = kTopAthosPlicPeripheralGpio,
  [kTopAthosPlicIrqIdRvTimerTimerExpired0_0] = kTopAthosPlicPeripheralRvTimer,
  [kTopAthosPlicIrqIdPwrmgrAonWakeup] = kTopAthosPlicPeripheralPwrmgrAon,
  [kTopAthosPlicIrqIdSysrstCtrlAonSysrstCtrl] = kTopAthosPlicPeripheralSysrstCtrlAon,
  [kTopAthosPlicIrqIdAonTimerAonWkupTimerExpired] = kTopAthosPlicPeripheralAonTimerAon,
  [kTopAthosPlicIrqIdAonTimerAonWdogTimerBark] = kTopAthosPlicPeripheralAonTimerAon,
  [kTopAthosPlicIrqIdFlashCtrlProgEmpty] = kTopAthosPlicPeripheralFlashCtrl,
  [kTopAthosPlicIrqIdFlashCtrlProgLvl] = kTopAthosPlicPeripheralFlashCtrl,
  [kTopAthosPlicIrqIdFlashCtrlRdFull] = kTopAthosPlicPeripheralFlashCtrl,
  [kTopAthosPlicIrqIdFlashCtrlRdLvl] = kTopAthosPlicPeripheralFlashCtrl,
  [kTopAthosPlicIrqIdFlashCtrlOpDone] = kTopAthosPlicPeripheralFlashCtrl,
  [kTopAthosPlicIrqIdFlashCtrlErr] = kTopAthosPlicPeripheralFlashCtrl,
};


/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_athos_alert_id_t` to
 * `top_athos_alert_peripheral_t`.
 */
const top_athos_alert_peripheral_t
    top_athos_alert_for_peripheral[5] = {
  [kTopAthosAlertIdFlashCtrlRecovErr] = kTopAthosAlertPeripheralFlashCtrl,
  [kTopAthosAlertIdFlashCtrlRecovMpErr] = kTopAthosAlertPeripheralFlashCtrl,
  [kTopAthosAlertIdFlashCtrlRecovEccErr] = kTopAthosAlertPeripheralFlashCtrl,
  [kTopAthosAlertIdFlashCtrlFatalIntgErr] = kTopAthosAlertPeripheralFlashCtrl,
  [kTopAthosAlertIdRomCtrlFatal] = kTopAthosAlertPeripheralRomCtrl,
};

