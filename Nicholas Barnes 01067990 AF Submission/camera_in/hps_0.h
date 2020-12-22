#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'soc_system' in
 * file './soc_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'sysid_qsys', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_COMPONENT_NAME sysid_qsys
#define SYSID_QSYS_BASE 0x1000
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_END 0x1007
#define SYSID_QSYS_ID 2899645186
#define SYSID_QSYS_TIMESTAMP 1492071627

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x2000
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0x2007
#define JTAG_UART_READ_DEPTH 512
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 512
#define JTAG_UART_WRITE_THRESHOLD 8

/*
 * Macros for device 'ledr', class 'altera_avalon_pio'
 * The macros are prefixed with 'LEDR_'.
 * The prefix is the slave descriptor.
 */
#define LEDR_COMPONENT_TYPE altera_avalon_pio
#define LEDR_COMPONENT_NAME ledr
#define LEDR_BASE 0x3000
#define LEDR_SPAN 16
#define LEDR_END 0x300f
#define LEDR_BIT_CLEARING_EDGE_REGISTER 0
#define LEDR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDR_CAPTURE 0
#define LEDR_DATA_WIDTH 10
#define LEDR_DO_TEST_BENCH_WIRING 0
#define LEDR_DRIVEN_SIM_VALUE 0
#define LEDR_EDGE_TYPE NONE
#define LEDR_FREQ 50000000
#define LEDR_HAS_IN 0
#define LEDR_HAS_OUT 1
#define LEDR_HAS_TRI 0
#define LEDR_IRQ_TYPE NONE
#define LEDR_RESET_VALUE 0

/*
 * Macros for device 'sw', class 'altera_avalon_pio'
 * The macros are prefixed with 'SW_'.
 * The prefix is the slave descriptor.
 */
#define SW_COMPONENT_TYPE altera_avalon_pio
#define SW_COMPONENT_NAME sw
#define SW_BASE 0x4000
#define SW_SPAN 16
#define SW_END 0x400f
#define SW_IRQ 1
#define SW_BIT_CLEARING_EDGE_REGISTER 0
#define SW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SW_CAPTURE 1
#define SW_DATA_WIDTH 10
#define SW_DO_TEST_BENCH_WIRING 0
#define SW_DRIVEN_SIM_VALUE 0
#define SW_EDGE_TYPE ANY
#define SW_FREQ 50000000
#define SW_HAS_IN 1
#define SW_HAS_OUT 0
#define SW_HAS_TRI 0
#define SW_IRQ_TYPE EDGE
#define SW_RESET_VALUE 0

/*
 * Macros for device 'key', class 'altera_avalon_pio'
 * The macros are prefixed with 'KEY_'.
 * The prefix is the slave descriptor.
 */
#define KEY_COMPONENT_TYPE altera_avalon_pio
#define KEY_COMPONENT_NAME key
#define KEY_BASE 0x5000
#define KEY_SPAN 16
#define KEY_END 0x500f
#define KEY_IRQ 0
#define KEY_BIT_CLEARING_EDGE_REGISTER 0
#define KEY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_CAPTURE 1
#define KEY_DATA_WIDTH 4
#define KEY_DO_TEST_BENCH_WIRING 0
#define KEY_DRIVEN_SIM_VALUE 0
#define KEY_EDGE_TYPE ANY
#define KEY_FREQ 50000000
#define KEY_HAS_IN 1
#define KEY_HAS_OUT 0
#define KEY_HAS_TRI 0
#define KEY_IRQ_TYPE EDGE
#define KEY_RESET_VALUE 0

/*
 * Macros for device 'alt_vip_vfr_vga', class 'alt_vip_vfr'
 * The macros are prefixed with 'ALT_VIP_VFR_VGA_'.
 * The prefix is the slave descriptor.
 */
#define ALT_VIP_VFR_VGA_COMPONENT_TYPE alt_vip_vfr
#define ALT_VIP_VFR_VGA_COMPONENT_NAME alt_vip_vfr_vga
#define ALT_VIP_VFR_VGA_BASE 0x31000
#define ALT_VIP_VFR_VGA_SPAN 128
#define ALT_VIP_VFR_VGA_END 0x3107f

/*
 * Macros for device 'alt_vip_cl_mixer_0', class 'alt_vip_cl_mixer'
 * The macros are prefixed with 'ALT_VIP_CL_MIXER_0_'.
 * The prefix is the slave descriptor.
 */
#define ALT_VIP_CL_MIXER_0_COMPONENT_TYPE alt_vip_cl_mixer
#define ALT_VIP_CL_MIXER_0_COMPONENT_NAME alt_vip_cl_mixer_0
#define ALT_VIP_CL_MIXER_0_BASE 0x32000
#define ALT_VIP_CL_MIXER_0_SPAN 512
#define ALT_VIP_CL_MIXER_0_END 0x321ff

/*
 * Macros for device 'seg7', class 'TERASIC_SEG7'
 * The macros are prefixed with 'SEG7_'.
 * The prefix is the slave descriptor.
 */
#define SEG7_COMPONENT_TYPE TERASIC_SEG7
#define SEG7_COMPONENT_NAME seg7
#define SEG7_BASE 0x33000
#define SEG7_SPAN 32
#define SEG7_END 0x3301f

/*
 * Macros for device 'ir_rx', class 'TERASIC_IR_RX_FIFO'
 * The macros are prefixed with 'IR_RX_'.
 * The prefix is the slave descriptor.
 */
#define IR_RX_COMPONENT_TYPE TERASIC_IR_RX_FIFO
#define IR_RX_COMPONENT_NAME ir_rx
#define IR_RX_BASE 0x34000
#define IR_RX_SPAN 8
#define IR_RX_END 0x34007

/*
 * Macros for device 'spi', class 'altera_avalon_spi'
 * The macros are prefixed with 'SPI_'.
 * The prefix is the slave descriptor.
 */
#define SPI_COMPONENT_TYPE altera_avalon_spi
#define SPI_COMPONENT_NAME spi
#define SPI_BASE 0x35000
#define SPI_SPAN 32
#define SPI_END 0x3501f
#define SPI_IRQ 2
#define SPI_CLOCKMULT 1
#define SPI_CLOCKPHASE 0
#define SPI_CLOCKPOLARITY 1
#define SPI_CLOCKUNITS "Hz"
#define SPI_DATABITS 16
#define SPI_DATAWIDTH 16
#define SPI_DELAYMULT "1.0E-9"
#define SPI_DELAYUNITS "ns"
#define SPI_EXTRADELAY 0
#define SPI_INSERT_SYNC 0
#define SPI_ISMASTER 1
#define SPI_LSBFIRST 0
#define SPI_NUMSLAVES 1
#define SPI_PREFIX "spi_"
#define SPI_SYNC_REG_DEPTH 2
#define SPI_TARGETCLOCK 20000000
#define SPI_TARGETSSDELAY "0.0"

/*
 * Macros for device 'tv_decoder_alt_vip_cl_cvi_0', class 'alt_vip_cl_cvi'
 * The macros are prefixed with 'TV_DECODER_ALT_VIP_CL_CVI_0_'.
 * The prefix is the slave descriptor.
 */
#define TV_DECODER_ALT_VIP_CL_CVI_0_COMPONENT_TYPE alt_vip_cl_cvi
#define TV_DECODER_ALT_VIP_CL_CVI_0_COMPONENT_NAME tv_decoder_alt_vip_cl_cvi_0
#define TV_DECODER_ALT_VIP_CL_CVI_0_BASE 0x36000
#define TV_DECODER_ALT_VIP_CL_CVI_0_SPAN 128
#define TV_DECODER_ALT_VIP_CL_CVI_0_END 0x3607f

/*
 * Macros for device 'tv_decoder_alt_vip_cl_scl_1', class 'alt_vip_cl_scl'
 * The macros are prefixed with 'TV_DECODER_ALT_VIP_CL_SCL_1_'.
 * The prefix is the slave descriptor.
 */
#define TV_DECODER_ALT_VIP_CL_SCL_1_COMPONENT_TYPE alt_vip_cl_scl
#define TV_DECODER_ALT_VIP_CL_SCL_1_COMPONENT_NAME tv_decoder_alt_vip_cl_scl_1
#define TV_DECODER_ALT_VIP_CL_SCL_1_BASE 0x37000
#define TV_DECODER_ALT_VIP_CL_SCL_1_SPAN 512
#define TV_DECODER_ALT_VIP_CL_SCL_1_END 0x371ff

/*
 * Macros for device 'audio', class 'TERASIC_AUDIO_WM8731'
 * The macros are prefixed with 'AUDIO_'.
 * The prefix is the slave descriptor.
 */
#define AUDIO_COMPONENT_TYPE TERASIC_AUDIO_WM8731
#define AUDIO_COMPONENT_NAME audio
#define AUDIO_BASE 0x38000
#define AUDIO_SPAN 16
#define AUDIO_END 0x3800f

/*
 * Macros for device 'tv_decoder_alt_vip_cl_scl_0', class 'alt_vip_cl_scl'
 * The macros are prefixed with 'TV_DECODER_ALT_VIP_CL_SCL_0_'.
 * The prefix is the slave descriptor.
 */
#define TV_DECODER_ALT_VIP_CL_SCL_0_COMPONENT_TYPE alt_vip_cl_scl
#define TV_DECODER_ALT_VIP_CL_SCL_0_COMPONENT_NAME tv_decoder_alt_vip_cl_scl_0
#define TV_DECODER_ALT_VIP_CL_SCL_0_BASE 0x39000
#define TV_DECODER_ALT_VIP_CL_SCL_0_SPAN 512
#define TV_DECODER_ALT_VIP_CL_SCL_0_END 0x391ff

/*
 * Macros for device 'tv_decoder_alt_vip_cl_swi_0', class 'alt_vip_cl_swi'
 * The macros are prefixed with 'TV_DECODER_ALT_VIP_CL_SWI_0_'.
 * The prefix is the slave descriptor.
 */
#define TV_DECODER_ALT_VIP_CL_SWI_0_COMPONENT_TYPE alt_vip_cl_swi
#define TV_DECODER_ALT_VIP_CL_SWI_0_COMPONENT_NAME tv_decoder_alt_vip_cl_swi_0
#define TV_DECODER_ALT_VIP_CL_SWI_0_BASE 0x3a000
#define TV_DECODER_ALT_VIP_CL_SWI_0_SPAN 128
#define TV_DECODER_ALT_VIP_CL_SWI_0_END 0x3a07f

/*
 * Macros for device 'tv_decoder_TERASIC_STREAM_CAPTURE', class 'TERASIC_STREAM_CAPTURE'
 * The macros are prefixed with 'TV_DECODER_TERASIC_STREAM_CAPTURE_'.
 * The prefix is the slave descriptor.
 */
#define TV_DECODER_TERASIC_STREAM_CAPTURE_COMPONENT_TYPE TERASIC_STREAM_CAPTURE
#define TV_DECODER_TERASIC_STREAM_CAPTURE_COMPONENT_NAME tv_decoder_TERASIC_STREAM_CAPTURE
#define TV_DECODER_TERASIC_STREAM_CAPTURE_BASE 0x3b000
#define TV_DECODER_TERASIC_STREAM_CAPTURE_SPAN 32
#define TV_DECODER_TERASIC_STREAM_CAPTURE_END 0x3b01f

/*
 * Macros for device 'ts_i2c', class 'i2c_opencores'
 * The macros are prefixed with 'TS_I2C_'.
 * The prefix is the slave descriptor.
 */
#define TS_I2C_COMPONENT_TYPE i2c_opencores
#define TS_I2C_COMPONENT_NAME ts_i2c
#define TS_I2C_BASE 0x50000
#define TS_I2C_SPAN 32
#define TS_I2C_END 0x5001f
#define TS_I2C_IRQ 3

/*
 * Macros for device 'ts_interrupt', class 'altera_avalon_pio'
 * The macros are prefixed with 'TS_INTERRUPT_'.
 * The prefix is the slave descriptor.
 */
#define TS_INTERRUPT_COMPONENT_TYPE altera_avalon_pio
#define TS_INTERRUPT_COMPONENT_NAME ts_interrupt
#define TS_INTERRUPT_BASE 0x51000
#define TS_INTERRUPT_SPAN 16
#define TS_INTERRUPT_END 0x5100f
#define TS_INTERRUPT_IRQ 4
#define TS_INTERRUPT_BIT_CLEARING_EDGE_REGISTER 0
#define TS_INTERRUPT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TS_INTERRUPT_CAPTURE 1
#define TS_INTERRUPT_DATA_WIDTH 1
#define TS_INTERRUPT_DO_TEST_BENCH_WIRING 0
#define TS_INTERRUPT_DRIVEN_SIM_VALUE 0
#define TS_INTERRUPT_EDGE_TYPE FALLING
#define TS_INTERRUPT_FREQ 50000000
#define TS_INTERRUPT_HAS_IN 1
#define TS_INTERRUPT_HAS_OUT 0
#define TS_INTERRUPT_HAS_TRI 0
#define TS_INTERRUPT_IRQ_TYPE EDGE
#define TS_INTERRUPT_RESET_VALUE 0

/*
 * Macros for device 'i2c_opencores_camera', class 'i2c_opencores'
 * The macros are prefixed with 'I2C_OPENCORES_CAMERA_'.
 * The prefix is the slave descriptor.
 */
#define I2C_OPENCORES_CAMERA_COMPONENT_TYPE i2c_opencores
#define I2C_OPENCORES_CAMERA_COMPONENT_NAME i2c_opencores_camera
#define I2C_OPENCORES_CAMERA_BASE 0x52000
#define I2C_OPENCORES_CAMERA_SPAN 32
#define I2C_OPENCORES_CAMERA_END 0x5201f
#define I2C_OPENCORES_CAMERA_IRQ 5

/*
 * Macros for device 'camera_pwdn_n', class 'altera_avalon_pio'
 * The macros are prefixed with 'CAMERA_PWDN_N_'.
 * The prefix is the slave descriptor.
 */
#define CAMERA_PWDN_N_COMPONENT_TYPE altera_avalon_pio
#define CAMERA_PWDN_N_COMPONENT_NAME camera_pwdn_n
#define CAMERA_PWDN_N_BASE 0x53000
#define CAMERA_PWDN_N_SPAN 16
#define CAMERA_PWDN_N_END 0x5300f
#define CAMERA_PWDN_N_BIT_CLEARING_EDGE_REGISTER 0
#define CAMERA_PWDN_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CAMERA_PWDN_N_CAPTURE 0
#define CAMERA_PWDN_N_DATA_WIDTH 1
#define CAMERA_PWDN_N_DO_TEST_BENCH_WIRING 0
#define CAMERA_PWDN_N_DRIVEN_SIM_VALUE 0
#define CAMERA_PWDN_N_EDGE_TYPE NONE
#define CAMERA_PWDN_N_FREQ 50000000
#define CAMERA_PWDN_N_HAS_IN 0
#define CAMERA_PWDN_N_HAS_OUT 1
#define CAMERA_PWDN_N_HAS_TRI 0
#define CAMERA_PWDN_N_IRQ_TYPE NONE
#define CAMERA_PWDN_N_RESET_VALUE 1

/*
 * Macros for device 'i2c_opencores_mipi', class 'i2c_opencores'
 * The macros are prefixed with 'I2C_OPENCORES_MIPI_'.
 * The prefix is the slave descriptor.
 */
#define I2C_OPENCORES_MIPI_COMPONENT_TYPE i2c_opencores
#define I2C_OPENCORES_MIPI_COMPONENT_NAME i2c_opencores_mipi
#define I2C_OPENCORES_MIPI_BASE 0x54000
#define I2C_OPENCORES_MIPI_SPAN 32
#define I2C_OPENCORES_MIPI_END 0x5401f
#define I2C_OPENCORES_MIPI_IRQ 6

/*
 * Macros for device 'mipi_reset_n', class 'altera_avalon_pio'
 * The macros are prefixed with 'MIPI_RESET_N_'.
 * The prefix is the slave descriptor.
 */
#define MIPI_RESET_N_COMPONENT_TYPE altera_avalon_pio
#define MIPI_RESET_N_COMPONENT_NAME mipi_reset_n
#define MIPI_RESET_N_BASE 0x55000
#define MIPI_RESET_N_SPAN 16
#define MIPI_RESET_N_END 0x5500f
#define MIPI_RESET_N_BIT_CLEARING_EDGE_REGISTER 0
#define MIPI_RESET_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MIPI_RESET_N_CAPTURE 0
#define MIPI_RESET_N_DATA_WIDTH 1
#define MIPI_RESET_N_DO_TEST_BENCH_WIRING 0
#define MIPI_RESET_N_DRIVEN_SIM_VALUE 0
#define MIPI_RESET_N_EDGE_TYPE NONE
#define MIPI_RESET_N_FREQ 50000000
#define MIPI_RESET_N_HAS_IN 0
#define MIPI_RESET_N_HAS_OUT 1
#define MIPI_RESET_N_HAS_TRI 0
#define MIPI_RESET_N_IRQ_TYPE NONE
#define MIPI_RESET_N_RESET_VALUE 1

/*
 * Macros for device 'spi_mpu', class 'altera_avalon_spi'
 * The macros are prefixed with 'SPI_MPU_'.
 * The prefix is the slave descriptor.
 */
#define SPI_MPU_COMPONENT_TYPE altera_avalon_spi
#define SPI_MPU_COMPONENT_NAME spi_mpu
#define SPI_MPU_BASE 0x56000
#define SPI_MPU_SPAN 32
#define SPI_MPU_END 0x5601f
#define SPI_MPU_IRQ 7
#define SPI_MPU_CLOCKMULT 1
#define SPI_MPU_CLOCKPHASE 1
#define SPI_MPU_CLOCKPOLARITY 1
#define SPI_MPU_CLOCKUNITS "Hz"
#define SPI_MPU_DATABITS 8
#define SPI_MPU_DATAWIDTH 16
#define SPI_MPU_DELAYMULT "1.0E-9"
#define SPI_MPU_DELAYUNITS "ns"
#define SPI_MPU_EXTRADELAY 0
#define SPI_MPU_INSERT_SYNC 0
#define SPI_MPU_ISMASTER 1
#define SPI_MPU_LSBFIRST 0
#define SPI_MPU_NUMSLAVES 1
#define SPI_MPU_PREFIX "spi_"
#define SPI_MPU_SYNC_REG_DEPTH 2
#define SPI_MPU_TARGETCLOCK 1000000
#define SPI_MPU_TARGETSSDELAY "0.0"

/*
 * Macros for device 'mpu_int', class 'altera_avalon_pio'
 * The macros are prefixed with 'MPU_INT_'.
 * The prefix is the slave descriptor.
 */
#define MPU_INT_COMPONENT_TYPE altera_avalon_pio
#define MPU_INT_COMPONENT_NAME mpu_int
#define MPU_INT_BASE 0x57000
#define MPU_INT_SPAN 16
#define MPU_INT_END 0x5700f
#define MPU_INT_IRQ 9
#define MPU_INT_BIT_CLEARING_EDGE_REGISTER 0
#define MPU_INT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MPU_INT_CAPTURE 1
#define MPU_INT_DATA_WIDTH 1
#define MPU_INT_DO_TEST_BENCH_WIRING 0
#define MPU_INT_DRIVEN_SIM_VALUE 0
#define MPU_INT_EDGE_TYPE RISING
#define MPU_INT_FREQ 50000000
#define MPU_INT_HAS_IN 1
#define MPU_INT_HAS_OUT 0
#define MPU_INT_HAS_TRI 0
#define MPU_INT_IRQ_TYPE EDGE
#define MPU_INT_RESET_VALUE 0

/*
 * Macros for device 'i2c_opencores_light', class 'i2c_opencores'
 * The macros are prefixed with 'I2C_OPENCORES_LIGHT_'.
 * The prefix is the slave descriptor.
 */
#define I2C_OPENCORES_LIGHT_COMPONENT_TYPE i2c_opencores
#define I2C_OPENCORES_LIGHT_COMPONENT_NAME i2c_opencores_light
#define I2C_OPENCORES_LIGHT_BASE 0x58000
#define I2C_OPENCORES_LIGHT_SPAN 32
#define I2C_OPENCORES_LIGHT_END 0x5801f
#define I2C_OPENCORES_LIGHT_IRQ 8

/*
 * Macros for device 'light_int', class 'altera_avalon_pio'
 * The macros are prefixed with 'LIGHT_INT_'.
 * The prefix is the slave descriptor.
 */
#define LIGHT_INT_COMPONENT_TYPE altera_avalon_pio
#define LIGHT_INT_COMPONENT_NAME light_int
#define LIGHT_INT_BASE 0x59000
#define LIGHT_INT_SPAN 16
#define LIGHT_INT_END 0x5900f
#define LIGHT_INT_IRQ 10
#define LIGHT_INT_BIT_CLEARING_EDGE_REGISTER 0
#define LIGHT_INT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LIGHT_INT_CAPTURE 1
#define LIGHT_INT_DATA_WIDTH 1
#define LIGHT_INT_DO_TEST_BENCH_WIRING 0
#define LIGHT_INT_DRIVEN_SIM_VALUE 0
#define LIGHT_INT_EDGE_TYPE RISING
#define LIGHT_INT_FREQ 50000000
#define LIGHT_INT_HAS_IN 1
#define LIGHT_INT_HAS_OUT 0
#define LIGHT_INT_HAS_TRI 0
#define LIGHT_INT_IRQ_TYPE EDGE
#define LIGHT_INT_RESET_VALUE 0


#endif /* _ALTERA_HPS_0_H_ */
