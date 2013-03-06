
#ifndef _HUNDSBUAH_H_
#define _HUNDSBUAH_H_

/* Tegra3 TF700/T OC */

/*****************************/
/*                           */
/*      Voltage section      */
/*                           */
/*****************************/

/* Voltage CAPs */
/* User overvolting can override the HUNDSBUAH_MAX_CORE_VOLTAGE
 * and HUNDSBUAH_MAX_CPU_VOLTAGE voltages but cannot go higher
 * than the CAP values
 */
#define HUNDSBUAH_CORE_VOLTAGE_CAP        (1550)   /* mV */
#define HUNDSBUAH_CPU_VOLTAGE_CAP         (1550)   /* mV */

/* Voltage used by the system init */
/* User can override these values by under- /over- 
 * volting */
#define HUNDSBUAH_MAX_CORE_VOLTAGE        (1450)   /* mV */
#define HUNDSBUAH_MAX_CPU_VOLTAGE         (1400)   /* mV */


/*****************************/
/*                           */
/*    Frequency section      */
/*                           */
/*****************************/

/* max. cpu frequency */
#define HUNDSBUAH_MAX_CPU_FREQUENCY_CAP   (1875)   /* MHz */
#define HUNDSBUAH_MAX_CORE_FREQUENCY_CAP  (725)    /* MHz */

/* max. gpu frequency */
#define HUNDSBUAH_MAX_CPU_FREQUENCY       (1875)   /* MHz */
#define HUNDSBUAH_MAX_CORE_FREQUENCY      (725)    /* MHz */


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
