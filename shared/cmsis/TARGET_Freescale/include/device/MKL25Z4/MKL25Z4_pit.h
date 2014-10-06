/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_PIT_REGISTERS_H__
#define __HW_PIT_REGISTERS_H__

#include "MKL25Z4.h"
#include "fsl_bitband.h"

/*
 * MKL25Z4 PIT
 *
 * Periodic Interrupt Timer
 *
 * Registers defined in this header file:
 * - HW_PIT_MCR - PIT Module Control Register
 * - HW_PIT_LTMR64H - PIT Upper Lifetime Timer Register
 * - HW_PIT_LTMR64L - PIT Lower Lifetime Timer Register
 * - HW_PIT_LDVALn - Timer Load Value Register
 * - HW_PIT_CVALn - Current Timer Value Register
 * - HW_PIT_TCTRLn - Timer Control Register
 * - HW_PIT_TFLGn - Timer Flag Register
 *
 * - hw_pit_t - Struct containing all module registers.
 */

#define HW_PIT_INSTANCE_COUNT (1U) /*!< Number of instances of the PIT module. */

/*******************************************************************************
 * HW_PIT_MCR - PIT Module Control Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_MCR - PIT Module Control Register (RW)
 *
 * Reset value: 0x00000002U
 *
 * This register enables or disables the PIT timer clocks and controls the
 * timers when the PIT enters the Debug mode.
 */
typedef union _hw_pit_mcr
{
    uint32_t U;
    struct _hw_pit_mcr_bitfields
    {
        uint32_t FRZ : 1;              /*!< [0] Freeze */
        uint32_t MDIS : 1;             /*!< [1] Module Disable - (PIT section) */
        uint32_t RESERVED0 : 30;       /*!< [31:2]  */
    } B;
} hw_pit_mcr_t;

/*!
 * @name Constants and macros for entire PIT_MCR register
 */
/*@{*/
#define HW_PIT_MCR_ADDR(x)       ((x) + 0x0U)

#define HW_PIT_MCR(x)            (*(__IO hw_pit_mcr_t *) HW_PIT_MCR_ADDR(x))
#define HW_PIT_MCR_RD(x)         (HW_PIT_MCR(x).U)
#define HW_PIT_MCR_WR(x, v)      (HW_PIT_MCR(x).U = (v))
#define HW_PIT_MCR_SET(x, v)     (BME_OR32(HW_PIT_MCR_ADDR(x), (uint32_t)(v)))
#define HW_PIT_MCR_CLR(x, v)     (BME_AND32(HW_PIT_MCR_ADDR(x), (uint32_t)(~(v))))
#define HW_PIT_MCR_TOG(x, v)     (BME_XOR32(HW_PIT_MCR_ADDR(x), (uint32_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PIT_MCR bitfields
 */

/*!
 * @name Register PIT_MCR, field FRZ[0] (RW)
 *
 * Allows the timers to be stopped when the device enters the Debug mode.
 *
 * Values:
 * - 0 - Timers continue to run in Debug mode.
 * - 1 - Timers are stopped in Debug mode.
 */
/*@{*/
#define BP_PIT_MCR_FRZ       (0U)          /*!< Bit position for PIT_MCR_FRZ. */
#define BM_PIT_MCR_FRZ       (0x00000001U) /*!< Bit mask for PIT_MCR_FRZ. */
#define BS_PIT_MCR_FRZ       (1U)          /*!< Bit field size in bits for PIT_MCR_FRZ. */

/*! @brief Read current value of the PIT_MCR_FRZ field. */
#define BR_PIT_MCR_FRZ(x)    (BME_UBFX32(HW_PIT_MCR_ADDR(x), BP_PIT_MCR_FRZ, BS_PIT_MCR_FRZ))

/*! @brief Format value for bitfield PIT_MCR_FRZ. */
#define BF_PIT_MCR_FRZ(v)    ((uint32_t)((uint32_t)(v) << BP_PIT_MCR_FRZ) & BM_PIT_MCR_FRZ)

/*! @brief Set the FRZ field to a new value. */
#define BW_PIT_MCR_FRZ(x, v) (BME_BFI32(HW_PIT_MCR_ADDR(x), ((uint32_t)(v) << BP_PIT_MCR_FRZ), BP_PIT_MCR_FRZ, 1))
/*@}*/

/*!
 * @name Register PIT_MCR, field MDIS[1] (RW)
 *
 * Disables the standard timers. The RTI timer is not affected by this field.
 * This field must be enabled before any other setup is done.
 *
 * Values:
 * - 0 - Clock for standard PIT timers is enabled.
 * - 1 - Clock for standard PIT timers is disabled.
 */
/*@{*/
#define BP_PIT_MCR_MDIS      (1U)          /*!< Bit position for PIT_MCR_MDIS. */
#define BM_PIT_MCR_MDIS      (0x00000002U) /*!< Bit mask for PIT_MCR_MDIS. */
#define BS_PIT_MCR_MDIS      (1U)          /*!< Bit field size in bits for PIT_MCR_MDIS. */

/*! @brief Read current value of the PIT_MCR_MDIS field. */
#define BR_PIT_MCR_MDIS(x)   (BME_UBFX32(HW_PIT_MCR_ADDR(x), BP_PIT_MCR_MDIS, BS_PIT_MCR_MDIS))

/*! @brief Format value for bitfield PIT_MCR_MDIS. */
#define BF_PIT_MCR_MDIS(v)   ((uint32_t)((uint32_t)(v) << BP_PIT_MCR_MDIS) & BM_PIT_MCR_MDIS)

/*! @brief Set the MDIS field to a new value. */
#define BW_PIT_MCR_MDIS(x, v) (BME_BFI32(HW_PIT_MCR_ADDR(x), ((uint32_t)(v) << BP_PIT_MCR_MDIS), BP_PIT_MCR_MDIS, 1))
/*@}*/

/*******************************************************************************
 * HW_PIT_LTMR64H - PIT Upper Lifetime Timer Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_LTMR64H - PIT Upper Lifetime Timer Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * This register is intended for applications that chain timer 0 and timer 1 to
 * build a 64-bit lifetimer.
 */
typedef union _hw_pit_ltmr64h
{
    uint32_t U;
    struct _hw_pit_ltmr64h_bitfields
    {
        uint32_t LTH : 32;             /*!< [31:0] Life Timer value */
    } B;
} hw_pit_ltmr64h_t;

/*!
 * @name Constants and macros for entire PIT_LTMR64H register
 */
/*@{*/
#define HW_PIT_LTMR64H_ADDR(x)   ((x) + 0xE0U)

#define HW_PIT_LTMR64H(x)        (*(__I hw_pit_ltmr64h_t *) HW_PIT_LTMR64H_ADDR(x))
#define HW_PIT_LTMR64H_RD(x)     (HW_PIT_LTMR64H(x).U)
/*@}*/

/*
 * Constants & macros for individual PIT_LTMR64H bitfields
 */

/*!
 * @name Register PIT_LTMR64H, field LTH[31:0] (RO)
 *
 * Shows the timer value of timer 1. If this register is read at a time t1,
 * LTMR64L shows the value of timer 0 at time t1.
 */
/*@{*/
#define BP_PIT_LTMR64H_LTH   (0U)          /*!< Bit position for PIT_LTMR64H_LTH. */
#define BM_PIT_LTMR64H_LTH   (0xFFFFFFFFU) /*!< Bit mask for PIT_LTMR64H_LTH. */
#define BS_PIT_LTMR64H_LTH   (32U)         /*!< Bit field size in bits for PIT_LTMR64H_LTH. */

/*! @brief Read current value of the PIT_LTMR64H_LTH field. */
#define BR_PIT_LTMR64H_LTH(x) (HW_PIT_LTMR64H(x).U)
/*@}*/

/*******************************************************************************
 * HW_PIT_LTMR64L - PIT Lower Lifetime Timer Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_LTMR64L - PIT Lower Lifetime Timer Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * This register is intended for applications that chain timer 0 and timer 1 to
 * build a 64-bit lifetimer. To use LTMR64H and LTMR64L, timer 0 and timer 1 need
 * to be chained. To obtain the correct value, first read LTMR64H and then
 * LTMR64L. LTMR64H will have the value of CVAL1 at the time of the first access,
 * LTMR64L will have the value of CVAL0 at the time of the first access, therefore
 * the application does not need to worry about carry-over effects of the running
 * counter.
 */
typedef union _hw_pit_ltmr64l
{
    uint32_t U;
    struct _hw_pit_ltmr64l_bitfields
    {
        uint32_t LTL : 32;             /*!< [31:0] Life Timer value */
    } B;
} hw_pit_ltmr64l_t;

/*!
 * @name Constants and macros for entire PIT_LTMR64L register
 */
/*@{*/
#define HW_PIT_LTMR64L_ADDR(x)   ((x) + 0xE4U)

#define HW_PIT_LTMR64L(x)        (*(__I hw_pit_ltmr64l_t *) HW_PIT_LTMR64L_ADDR(x))
#define HW_PIT_LTMR64L_RD(x)     (HW_PIT_LTMR64L(x).U)
/*@}*/

/*
 * Constants & macros for individual PIT_LTMR64L bitfields
 */

/*!
 * @name Register PIT_LTMR64L, field LTL[31:0] (RO)
 *
 * Shows the value of timer 0 at the time LTMR64H was last read. It will only
 * update if LTMR64H is read.
 */
/*@{*/
#define BP_PIT_LTMR64L_LTL   (0U)          /*!< Bit position for PIT_LTMR64L_LTL. */
#define BM_PIT_LTMR64L_LTL   (0xFFFFFFFFU) /*!< Bit mask for PIT_LTMR64L_LTL. */
#define BS_PIT_LTMR64L_LTL   (32U)         /*!< Bit field size in bits for PIT_LTMR64L_LTL. */

/*! @brief Read current value of the PIT_LTMR64L_LTL field. */
#define BR_PIT_LTMR64L_LTL(x) (HW_PIT_LTMR64L(x).U)
/*@}*/

/*******************************************************************************
 * HW_PIT_LDVALn - Timer Load Value Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_LDVALn - Timer Load Value Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These registers select the timeout period for the timer interrupts.
 */
typedef union _hw_pit_ldvaln
{
    uint32_t U;
    struct _hw_pit_ldvaln_bitfields
    {
        uint32_t TSV : 32;             /*!< [31:0] Timer Start Value */
    } B;
} hw_pit_ldvaln_t;

/*!
 * @name Constants and macros for entire PIT_LDVALn register
 */
/*@{*/
#define HW_PIT_LDVALn_COUNT (2U)

#define HW_PIT_LDVALn_ADDR(x, n) ((x) + 0x100U + (0x10U * (n)))

#define HW_PIT_LDVALn(x, n)      (*(__IO hw_pit_ldvaln_t *) HW_PIT_LDVALn_ADDR(x, n))
#define HW_PIT_LDVALn_RD(x, n)   (HW_PIT_LDVALn(x, n).U)
#define HW_PIT_LDVALn_WR(x, n, v) (HW_PIT_LDVALn(x, n).U = (v))
#define HW_PIT_LDVALn_SET(x, n, v) (BME_OR32(HW_PIT_LDVALn_ADDR(x, n), (uint32_t)(v)))
#define HW_PIT_LDVALn_CLR(x, n, v) (BME_AND32(HW_PIT_LDVALn_ADDR(x, n), (uint32_t)(~(v))))
#define HW_PIT_LDVALn_TOG(x, n, v) (BME_XOR32(HW_PIT_LDVALn_ADDR(x, n), (uint32_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PIT_LDVALn bitfields
 */

/*!
 * @name Register PIT_LDVALn, field TSV[31:0] (RW)
 *
 * Sets the timer start value. The timer will count down until it reaches 0,
 * then it will generate an interrupt and load this register value again. Writing a
 * new value to this register will not restart the timer; instead the value will
 * be loaded after the timer expires. To abort the current cycle and start a
 * timer period with the new value, the timer must be disabled and enabled again.
 */
/*@{*/
#define BP_PIT_LDVALn_TSV    (0U)          /*!< Bit position for PIT_LDVALn_TSV. */
#define BM_PIT_LDVALn_TSV    (0xFFFFFFFFU) /*!< Bit mask for PIT_LDVALn_TSV. */
#define BS_PIT_LDVALn_TSV    (32U)         /*!< Bit field size in bits for PIT_LDVALn_TSV. */

/*! @brief Read current value of the PIT_LDVALn_TSV field. */
#define BR_PIT_LDVALn_TSV(x, n) (HW_PIT_LDVALn(x, n).U)

/*! @brief Format value for bitfield PIT_LDVALn_TSV. */
#define BF_PIT_LDVALn_TSV(v) ((uint32_t)((uint32_t)(v) << BP_PIT_LDVALn_TSV) & BM_PIT_LDVALn_TSV)

/*! @brief Set the TSV field to a new value. */
#define BW_PIT_LDVALn_TSV(x, n, v) (HW_PIT_LDVALn_WR(x, n, v))
/*@}*/
/*******************************************************************************
 * HW_PIT_CVALn - Current Timer Value Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_CVALn - Current Timer Value Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * These registers indicate the current timer position.
 */
typedef union _hw_pit_cvaln
{
    uint32_t U;
    struct _hw_pit_cvaln_bitfields
    {
        uint32_t TVL : 32;             /*!< [31:0] Current Timer Value */
    } B;
} hw_pit_cvaln_t;

/*!
 * @name Constants and macros for entire PIT_CVALn register
 */
/*@{*/
#define HW_PIT_CVALn_COUNT (2U)

#define HW_PIT_CVALn_ADDR(x, n)  ((x) + 0x104U + (0x10U * (n)))

#define HW_PIT_CVALn(x, n)       (*(__I hw_pit_cvaln_t *) HW_PIT_CVALn_ADDR(x, n))
#define HW_PIT_CVALn_RD(x, n)    (HW_PIT_CVALn(x, n).U)
/*@}*/

/*
 * Constants & macros for individual PIT_CVALn bitfields
 */

/*!
 * @name Register PIT_CVALn, field TVL[31:0] (RO)
 *
 * Represents the current timer value, if the timer is enabled. If the timer is
 * disabled, do not use this field as its value is unreliable. The timer uses a
 * downcounter. The timer values are frozen in Debug mode if MCR[FRZ] is set.
 */
/*@{*/
#define BP_PIT_CVALn_TVL     (0U)          /*!< Bit position for PIT_CVALn_TVL. */
#define BM_PIT_CVALn_TVL     (0xFFFFFFFFU) /*!< Bit mask for PIT_CVALn_TVL. */
#define BS_PIT_CVALn_TVL     (32U)         /*!< Bit field size in bits for PIT_CVALn_TVL. */

/*! @brief Read current value of the PIT_CVALn_TVL field. */
#define BR_PIT_CVALn_TVL(x, n) (HW_PIT_CVALn(x, n).U)
/*@}*/
/*******************************************************************************
 * HW_PIT_TCTRLn - Timer Control Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_TCTRLn - Timer Control Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These register contain the control bits for each timer.
 */
typedef union _hw_pit_tctrln
{
    uint32_t U;
    struct _hw_pit_tctrln_bitfields
    {
        uint32_t TEN : 1;              /*!< [0] Timer Enable */
        uint32_t TIE : 1;              /*!< [1] Timer Interrupt Enable */
        uint32_t CHN : 1;              /*!< [2] Chain Mode */
        uint32_t RESERVED0 : 29;       /*!< [31:3]  */
    } B;
} hw_pit_tctrln_t;

/*!
 * @name Constants and macros for entire PIT_TCTRLn register
 */
/*@{*/
#define HW_PIT_TCTRLn_COUNT (2U)

#define HW_PIT_TCTRLn_ADDR(x, n) ((x) + 0x108U + (0x10U * (n)))

#define HW_PIT_TCTRLn(x, n)      (*(__IO hw_pit_tctrln_t *) HW_PIT_TCTRLn_ADDR(x, n))
#define HW_PIT_TCTRLn_RD(x, n)   (HW_PIT_TCTRLn(x, n).U)
#define HW_PIT_TCTRLn_WR(x, n, v) (HW_PIT_TCTRLn(x, n).U = (v))
#define HW_PIT_TCTRLn_SET(x, n, v) (BME_OR32(HW_PIT_TCTRLn_ADDR(x, n), (uint32_t)(v)))
#define HW_PIT_TCTRLn_CLR(x, n, v) (BME_AND32(HW_PIT_TCTRLn_ADDR(x, n), (uint32_t)(~(v))))
#define HW_PIT_TCTRLn_TOG(x, n, v) (BME_XOR32(HW_PIT_TCTRLn_ADDR(x, n), (uint32_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PIT_TCTRLn bitfields
 */

/*!
 * @name Register PIT_TCTRLn, field TEN[0] (RW)
 *
 * Enables or disables the timer.
 *
 * Values:
 * - 0 - Timer n is disabled.
 * - 1 - Timer n is enabled.
 */
/*@{*/
#define BP_PIT_TCTRLn_TEN    (0U)          /*!< Bit position for PIT_TCTRLn_TEN. */
#define BM_PIT_TCTRLn_TEN    (0x00000001U) /*!< Bit mask for PIT_TCTRLn_TEN. */
#define BS_PIT_TCTRLn_TEN    (1U)          /*!< Bit field size in bits for PIT_TCTRLn_TEN. */

/*! @brief Read current value of the PIT_TCTRLn_TEN field. */
#define BR_PIT_TCTRLn_TEN(x, n) (BME_UBFX32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_TEN, BS_PIT_TCTRLn_TEN))

/*! @brief Format value for bitfield PIT_TCTRLn_TEN. */
#define BF_PIT_TCTRLn_TEN(v) ((uint32_t)((uint32_t)(v) << BP_PIT_TCTRLn_TEN) & BM_PIT_TCTRLn_TEN)

/*! @brief Set the TEN field to a new value. */
#define BW_PIT_TCTRLn_TEN(x, n, v) (BME_BFI32(HW_PIT_TCTRLn_ADDR(x, n), ((uint32_t)(v) << BP_PIT_TCTRLn_TEN), BP_PIT_TCTRLn_TEN, 1))
/*@}*/

/*!
 * @name Register PIT_TCTRLn, field TIE[1] (RW)
 *
 * When an interrupt is pending, or, TFLGn[TIF] is set, enabling the interrupt
 * will immediately cause an interrupt event. To avoid this, the associated
 * TFLGn[TIF] must be cleared first.
 *
 * Values:
 * - 0 - Interrupt requests from Timer n are disabled.
 * - 1 - Interrupt will be requested whenever TIF is set.
 */
/*@{*/
#define BP_PIT_TCTRLn_TIE    (1U)          /*!< Bit position for PIT_TCTRLn_TIE. */
#define BM_PIT_TCTRLn_TIE    (0x00000002U) /*!< Bit mask for PIT_TCTRLn_TIE. */
#define BS_PIT_TCTRLn_TIE    (1U)          /*!< Bit field size in bits for PIT_TCTRLn_TIE. */

/*! @brief Read current value of the PIT_TCTRLn_TIE field. */
#define BR_PIT_TCTRLn_TIE(x, n) (BME_UBFX32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_TIE, BS_PIT_TCTRLn_TIE))

/*! @brief Format value for bitfield PIT_TCTRLn_TIE. */
#define BF_PIT_TCTRLn_TIE(v) ((uint32_t)((uint32_t)(v) << BP_PIT_TCTRLn_TIE) & BM_PIT_TCTRLn_TIE)

/*! @brief Set the TIE field to a new value. */
#define BW_PIT_TCTRLn_TIE(x, n, v) (BME_BFI32(HW_PIT_TCTRLn_ADDR(x, n), ((uint32_t)(v) << BP_PIT_TCTRLn_TIE), BP_PIT_TCTRLn_TIE, 1))
/*@}*/

/*!
 * @name Register PIT_TCTRLn, field CHN[2] (RW)
 *
 * When activated, Timer n-1 needs to expire before timer n can decrement by 1.
 * Timer 0 can not be changed.
 *
 * Values:
 * - 0 - Timer is not chained.
 * - 1 - Timer is chained to previous timer. For example, for Channel 2, if this
 *     field is set, Timer 2 is chained to Timer 1.
 */
/*@{*/
#define BP_PIT_TCTRLn_CHN    (2U)          /*!< Bit position for PIT_TCTRLn_CHN. */
#define BM_PIT_TCTRLn_CHN    (0x00000004U) /*!< Bit mask for PIT_TCTRLn_CHN. */
#define BS_PIT_TCTRLn_CHN    (1U)          /*!< Bit field size in bits for PIT_TCTRLn_CHN. */

/*! @brief Read current value of the PIT_TCTRLn_CHN field. */
#define BR_PIT_TCTRLn_CHN(x, n) (BME_UBFX32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_CHN, BS_PIT_TCTRLn_CHN))

/*! @brief Format value for bitfield PIT_TCTRLn_CHN. */
#define BF_PIT_TCTRLn_CHN(v) ((uint32_t)((uint32_t)(v) << BP_PIT_TCTRLn_CHN) & BM_PIT_TCTRLn_CHN)

/*! @brief Set the CHN field to a new value. */
#define BW_PIT_TCTRLn_CHN(x, n, v) (BME_BFI32(HW_PIT_TCTRLn_ADDR(x, n), ((uint32_t)(v) << BP_PIT_TCTRLn_CHN), BP_PIT_TCTRLn_CHN, 1))
/*@}*/
/*******************************************************************************
 * HW_PIT_TFLGn - Timer Flag Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_TFLGn - Timer Flag Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These registers hold the PIT interrupt flags.
 */
typedef union _hw_pit_tflgn
{
    uint32_t U;
    struct _hw_pit_tflgn_bitfields
    {
        uint32_t TIF : 1;              /*!< [0] Timer Interrupt Flag */
        uint32_t RESERVED0 : 31;       /*!< [31:1]  */
    } B;
} hw_pit_tflgn_t;

/*!
 * @name Constants and macros for entire PIT_TFLGn register
 */
/*@{*/
#define HW_PIT_TFLGn_COUNT (2U)

#define HW_PIT_TFLGn_ADDR(x, n)  ((x) + 0x10CU + (0x10U * (n)))

#define HW_PIT_TFLGn(x, n)       (*(__IO hw_pit_tflgn_t *) HW_PIT_TFLGn_ADDR(x, n))
#define HW_PIT_TFLGn_RD(x, n)    (HW_PIT_TFLGn(x, n).U)
#define HW_PIT_TFLGn_WR(x, n, v) (HW_PIT_TFLGn(x, n).U = (v))
#define HW_PIT_TFLGn_SET(x, n, v) (BME_OR32(HW_PIT_TFLGn_ADDR(x, n), (uint32_t)(v)))
#define HW_PIT_TFLGn_CLR(x, n, v) (BME_AND32(HW_PIT_TFLGn_ADDR(x, n), (uint32_t)(~(v))))
#define HW_PIT_TFLGn_TOG(x, n, v) (BME_XOR32(HW_PIT_TFLGn_ADDR(x, n), (uint32_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PIT_TFLGn bitfields
 */

/*!
 * @name Register PIT_TFLGn, field TIF[0] (W1C)
 *
 * Sets to 1 at the end of the timer period. Writing 1 to this flag clears it.
 * Writing 0 has no effect. If enabled, or, when TCTRLn[TIE] = 1, TIF causes an
 * interrupt request.
 *
 * Values:
 * - 0 - Timeout has not yet occurred.
 * - 1 - Timeout has occurred.
 */
/*@{*/
#define BP_PIT_TFLGn_TIF     (0U)          /*!< Bit position for PIT_TFLGn_TIF. */
#define BM_PIT_TFLGn_TIF     (0x00000001U) /*!< Bit mask for PIT_TFLGn_TIF. */
#define BS_PIT_TFLGn_TIF     (1U)          /*!< Bit field size in bits for PIT_TFLGn_TIF. */

/*! @brief Read current value of the PIT_TFLGn_TIF field. */
#define BR_PIT_TFLGn_TIF(x, n) (BME_UBFX32(HW_PIT_TFLGn_ADDR(x, n), BP_PIT_TFLGn_TIF, BS_PIT_TFLGn_TIF))

/*! @brief Format value for bitfield PIT_TFLGn_TIF. */
#define BF_PIT_TFLGn_TIF(v)  ((uint32_t)((uint32_t)(v) << BP_PIT_TFLGn_TIF) & BM_PIT_TFLGn_TIF)

/*! @brief Set the TIF field to a new value. */
#define BW_PIT_TFLGn_TIF(x, n, v) (BME_BFI32(HW_PIT_TFLGn_ADDR(x, n), ((uint32_t)(v) << BP_PIT_TFLGn_TIF), BP_PIT_TFLGn_TIF, 1))
/*@}*/

/*******************************************************************************
 * hw_pit_t - module struct
 ******************************************************************************/
/*!
 * @brief All PIT module registers.
 */
#pragma pack(1)
typedef struct _hw_pit
{
    __IO hw_pit_mcr_t MCR;                 /*!< [0x0] PIT Module Control Register */
    uint8_t _reserved0[220];
    __I hw_pit_ltmr64h_t LTMR64H;          /*!< [0xE0] PIT Upper Lifetime Timer Register */
    __I hw_pit_ltmr64l_t LTMR64L;          /*!< [0xE4] PIT Lower Lifetime Timer Register */
    uint8_t _reserved1[24];
    struct {
        __IO hw_pit_ldvaln_t LDVALn;       /*!< [0x100] Timer Load Value Register */
        __I hw_pit_cvaln_t CVALn;          /*!< [0x104] Current Timer Value Register */
        __IO hw_pit_tctrln_t TCTRLn;       /*!< [0x108] Timer Control Register */
        __IO hw_pit_tflgn_t TFLGn;         /*!< [0x10C] Timer Flag Register */
    } CHANNEL[2];
} hw_pit_t;
#pragma pack()

/*! @brief Macro to access all PIT registers. */
/*! @param x PIT module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_PIT(PIT_BASE)</code>. */
#define HW_PIT(x)      (*(hw_pit_t *)(x))

#endif /* __HW_PIT_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
