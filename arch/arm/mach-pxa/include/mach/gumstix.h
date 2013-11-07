/*
 *  arch/arm/mach-pxa/include/mach/gumstix.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */


#define GPIO_GUMSTIX_BTRESET          7
#define GPIO_GUMSTIX_BTRESET_MD		(GPIO_GUMSTIX_BTRESET | GPIO_OUT)




#define GPIO_GUMSTIX_USB_GPIOn		35
#define GPIO_GUMSTIX_USB_GPIOx		41

#define GUMSTIX_USB_INTR_IRQ		PXA_GPIO_TO_IRQ(GPIO_GUMSTIX_USB_GPIOn)

#define GPIO_GUMSTIX_USB_GPIOn_MD	(GPIO_GUMSTIX_USB_GPIOn | GPIO_IN)
#define GPIO_GUMSTIX_USB_GPIOx_CON_MD	(GPIO_GUMSTIX_USB_GPIOx | GPIO_OUT)
#define GPIO_GUMSTIX_USB_GPIOx_DIS_MD	(GPIO_GUMSTIX_USB_GPIOx | GPIO_IN)

#define GUMSTIX_GPIO_nSD_WP		22 
#define GUMSTIX_GPIO_nSD_DETECT		11 
#define GUMSTIX_IRQ_GPIO_nSD_DETECT	PXA_GPIO_TO_IRQ(GUMSTIX_GPIO_nSD_DETECT)

#define GPIO_GUMSTIX_ETH0_RST		80
#define GPIO_GUMSTIX_ETH0_RST_MD	(GPIO_GUMSTIX_ETH0_RST | GPIO_OUT)
#define GPIO_GUMSTIX_ETH1_RST		52
#define GPIO_GUMSTIX_ETH1_RST_MD	(GPIO_GUMSTIX_ETH1_RST | GPIO_OUT)

#define GPIO_GUMSTIX_ETH0		36
#define GPIO_GUMSTIX_ETH0_MD		(GPIO_GUMSTIX_ETH0 | GPIO_IN)
#define GUMSTIX_ETH0_IRQ		PXA_GPIO_TO_IRQ(GPIO_GUMSTIX_ETH0)
#define GPIO_GUMSTIX_ETH1		27
#define GPIO_GUMSTIX_ETH1_MD		(GPIO_GUMSTIX_ETH1 | GPIO_IN)
#define GUMSTIX_ETH1_IRQ		PXA_GPIO_TO_IRQ(GPIO_GUMSTIX_ETH1)


#define GPIO8_RESET			8

#define GPIO4_nBVD1			4
#define GPIO4_nSTSCHG			GPIO4_nBVD1
#define GPIO11_nCD			11
#define GPIO26_PRDY_nBSY		26
#define GUMSTIX_S0_nSTSCHG_IRQ		PXA_GPIO_TO_IRQ(GPIO4_nSTSCHG)
#define GUMSTIX_S0_nCD_IRQ		PXA_GPIO_TO_IRQ(GPIO11_nCD)
#define GUMSTIX_S0_PRDY_nBSY_IRQ	PXA_GPIO_TO_IRQ(GPIO26_PRDY_nBSY)

#define GPIO18_nBVD1			18
#define GPIO18_nSTSCHG			GPIO18_nBVD1
#define GPIO36_nCD			36
#define GPIO27_PRDY_nBSY		27
#define GUMSTIX_S1_nSTSCHG_IRQ		PXA_GPIO_TO_IRQ(GPIO18_nSTSCHG)
#define GUMSTIX_S1_nCD_IRQ		PXA_GPIO_TO_IRQ(GPIO36_nCD)
#define GUMSTIX_S1_PRDY_nBSY_IRQ	PXA_GPIO_TO_IRQ(GPIO27_PRDY_nBSY)

#define GPIO4_nSTSCHG_MD		(GPIO4_nSTSCHG | GPIO_IN)
#define GPIO8_RESET_MD			(GPIO8_RESET | GPIO_OUT)
#define GPIO11_nCD_MD			(GPIO11_nCD | GPIO_IN)
#define GPIO18_nSTSCHG_MD		(GPIO18_nSTSCHG | GPIO_IN)
#define GPIO26_PRDY_nBSY_MD		(GPIO26_PRDY_nBSY | GPIO_IN)
#define GPIO27_PRDY_nBSY_MD		(GPIO27_PRDY_nBSY | GPIO_IN)
#define GPIO36_nCD_MD			(GPIO36_nCD | GPIO_IN)

extern int am200_init(void);
extern int am300_init(void);
