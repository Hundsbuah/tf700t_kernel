
#ifndef _HUNDSBUAH_H_
#define _HUNDSBUAH_H_

/* Tegra3 TF700/T OC */

/*****************************/
/*                           */
/*      Voltage section      */
/*                           */
/*****************************/

/* max and min voltages */
#define HUNDSBUAH_MIN_CPU_VOLTAGE         (725)    /* mV */
#define HUNDSBUAH_MAX_CPU_VOLTAGE         (1400)   /* mV */

#define HUNDSBUAH_MIN_CORE_VOLTAGE        (950)    /* mV */
#define HUNDSBUAH_MAX_CORE_VOLTAGE        (1400)   /* mV */


/*****************************/
/*                           */
/*    Frequency section      */
/*                           */
/*****************************/

/* max. frequencys */
#define HUNDSBUAH_MAX_CPU_FREQUENCY       (1850)   /* MHz */
#define HUNDSBUAH_MAX_CORE_FREQUENCY      (700)    /* MHz */
#define HUNDSBUAH_MAX_HOST1X_FREQUENCY    (350)    /* MHz */

#define HUNDSBUAH_SYSTEM_NORMAL_MODE_FREQUENCY     (1500)    /* MHz */
#define HUNDSBUAH_SYSTEM_BALANCE_MODE_FREQUENCY    (1300)    /* MHz */
#define HUNDSBUAH_SYSTEM_PWRSAVE_MODE_FREQUENCY    (1000)    /* MHz */
#define HUNDSBUAH_SYSTEM_OVERCLOCK_MODE_FREQUENCY  (HUNDSBUAH_MAX_CPU_FREQUENCY)    /* MHz */

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
