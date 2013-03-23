
#ifndef _HUNDSBUAH_H_
#define _HUNDSBUAH_H_

/* Tegra3 TF700/T OC */

/*****************************/
/*                           */
/*      Voltage section      */
/*                           */
/*****************************/

/* cap voltages */
#define HUNDSBUAH_CPU_VOLTAGE_CAP         (1405)   /* mV */
#define HUNDSBUAH_CORE_VOLTAGE_CAP        (1455)   /* mV */

/* max and min voltages */
#define HUNDSBUAH_MIN_CPU_VOLTAGE         (600)    /* mV */
#define HUNDSBUAH_MAX_CPU_VOLTAGE         (1400)   /* mV */

#define HUNDSBUAH_MIN_CORE_VOLTAGE        (850)    /* mV */
#define HUNDSBUAH_MAX_CORE_VOLTAGE        (1450)   /* mV */


/*****************************/
/*                           */
/*    Frequency section      */
/*                           */
/*****************************/

/* cap frequencys */
#define HUNDSBUAH_CPU_FREQUENCY_CAP       (1900)   /* MHz */
#define HUNDSBUAH_CORE_FREQUENCY_CAP      (750)    /* MHz */
#define HUNDSBUAH_HOST1X_FREQUENCY_CAP \
        (DIV_ROUND_UP((HUNDSBUAH_CORE_FREQUENCY_CAP), 2)) /* MHz */

/* max. frequencys */
#define HUNDSBUAH_MAX_CPU_FREQUENCY       (1900)   /* MHz */
#define HUNDSBUAH_MAX_CORE_FREQUENCY      (750)    /* MHz */
#define HUNDSBUAH_MAX_HOST1X_FREQUENCY    (350)    /* MHz */

#define HUNDSBUAH_SYSTEM_NORMAL_MODE_FREQUENCY     (HUNDSBUAH_MAX_CPU_FREQUENCY)    /* MHz */
#define HUNDSBUAH_SYSTEM_BALANCE_MODE_FREQUENCY    (1000)    /* MHz */
#define HUNDSBUAH_SYSTEM_PWRSAVE_MODE_FREQUENCY    (768)    /* MHz */


/* This is the table index for the max/oc/last gpu
 * frequency in the dvfs table for tf700t
 */
#define HUNDSBUAH_CORE_MAXFREQ_IDX  (8)
/* This is the table index for the max/oc/last cpu
 * frequency in the dvfs table for tf700t
 */
#define HUNDSBUAH_CPU_MAXFREQ_IDX   (39)
/* Default gpu oc values after init is done */
#define HUNDSBUAH_CORE_DEFAULT_OC_FREQUENCY  (675)    /* MHz */
#define HUNDSBUAH_CORE_DEFAULT_OC_VOLT       (1350)   /* mV */

/*****************************/
/*                           */
/*   Temperature section     */
/*                           */
/*****************************/

/* shutdown temperature */
#define HUNDSBUAH_SHUTDOWN_TEMP            (90000)   /* mCelsius - 90000 original value */

/* thorttle down temp */
#define HUNDSBUAH_THROTTLE_DOWN_TEMP       (86000)   /* mCelsius - 85000 original value */

#endif
