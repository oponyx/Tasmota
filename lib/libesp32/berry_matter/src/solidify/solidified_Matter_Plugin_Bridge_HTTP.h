/* Solidification of Matter_Plugin_Bridge_HTTP.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_GetOptionReader;

/********************************************************************
** Solidified function: getoption
********************************************************************/
be_local_closure(GetOptionReader_getoption,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str_weak(flag),
    /* K1   */  be_nested_str_weak(getbits),
    /* K2   */  be_const_int(1),
    /* K3   */  be_nested_str_weak(flag2),
    /* K4   */  be_nested_str_weak(get),
    /* K5   */  be_nested_str_weak(flag3),
    /* K6   */  be_nested_str_weak(flag4),
    /* K7   */  be_nested_str_weak(flag5),
    /* K8   */  be_nested_str_weak(flag6),
    }),
    be_str_weak(getoption),
    &be_const_str_solidified,
    ( &(const binstruction[65]) {  /* code */
      0x540A001F,  //  0000  LDINT	R2	32
      0x14080202,  //  0001  LT	R2	R1	R2
      0x780A0006,  //  0002  JMPF	R2	#000A
      0x88080100,  //  0003  GETMBR	R2	R0	K0
      0x8C080501,  //  0004  GETMET	R2	R2	K1
      0x5C100200,  //  0005  MOVE	R4	R1
      0x58140002,  //  0006  LDCONST	R5	K2
      0x7C080600,  //  0007  CALL	R2	3
      0x80040400,  //  0008  RET	1	R2
      0x70020035,  //  0009  JMP		#0040
      0x540A0031,  //  000A  LDINT	R2	50
      0x14080202,  //  000B  LT	R2	R1	R2
      0x780A0007,  //  000C  JMPF	R2	#0015
      0x88080103,  //  000D  GETMBR	R2	R0	K3
      0x8C080504,  //  000E  GETMET	R2	R2	K4
      0x5412001F,  //  000F  LDINT	R4	32
      0x04100204,  //  0010  SUB	R4	R1	R4
      0x58140002,  //  0011  LDCONST	R5	K2
      0x7C080600,  //  0012  CALL	R2	3
      0x80040400,  //  0013  RET	1	R2
      0x7002002A,  //  0014  JMP		#0040
      0x540A0051,  //  0015  LDINT	R2	82
      0x14080202,  //  0016  LT	R2	R1	R2
      0x780A0007,  //  0017  JMPF	R2	#0020
      0x88080105,  //  0018  GETMBR	R2	R0	K5
      0x8C080501,  //  0019  GETMET	R2	R2	K1
      0x54120031,  //  001A  LDINT	R4	50
      0x04100204,  //  001B  SUB	R4	R1	R4
      0x58140002,  //  001C  LDCONST	R5	K2
      0x7C080600,  //  001D  CALL	R2	3
      0x80040400,  //  001E  RET	1	R2
      0x7002001F,  //  001F  JMP		#0040
      0x540A0071,  //  0020  LDINT	R2	114
      0x14080202,  //  0021  LT	R2	R1	R2
      0x780A0007,  //  0022  JMPF	R2	#002B
      0x88080106,  //  0023  GETMBR	R2	R0	K6
      0x8C080501,  //  0024  GETMET	R2	R2	K1
      0x54120051,  //  0025  LDINT	R4	82
      0x04100204,  //  0026  SUB	R4	R1	R4
      0x58140002,  //  0027  LDCONST	R5	K2
      0x7C080600,  //  0028  CALL	R2	3
      0x80040400,  //  0029  RET	1	R2
      0x70020014,  //  002A  JMP		#0040
      0x540A0091,  //  002B  LDINT	R2	146
      0x14080202,  //  002C  LT	R2	R1	R2
      0x780A0007,  //  002D  JMPF	R2	#0036
      0x88080107,  //  002E  GETMBR	R2	R0	K7
      0x8C080501,  //  002F  GETMET	R2	R2	K1
      0x54120071,  //  0030  LDINT	R4	114
      0x04100204,  //  0031  SUB	R4	R1	R4
      0x58140002,  //  0032  LDCONST	R5	K2
      0x7C080600,  //  0033  CALL	R2	3
      0x80040400,  //  0034  RET	1	R2
      0x70020009,  //  0035  JMP		#0040
      0x540A00B1,  //  0036  LDINT	R2	178
      0x14080202,  //  0037  LT	R2	R1	R2
      0x780A0006,  //  0038  JMPF	R2	#0040
      0x88080108,  //  0039  GETMBR	R2	R0	K8
      0x8C080501,  //  003A  GETMET	R2	R2	K1
      0x54120091,  //  003B  LDINT	R4	146
      0x04100204,  //  003C  SUB	R4	R1	R4
      0x58140002,  //  003D  LDCONST	R5	K2
      0x7C080600,  //  003E  CALL	R2	3
      0x80040400,  //  003F  RET	1	R2
      0x80000000,  //  0040  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(GetOptionReader_init,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(value_error),
    /* K1   */  be_nested_str_weak(invalid_X20json),
    /* K2   */  be_nested_str_weak(SetOption),
    /* K3   */  be_nested_str_weak(flag),
    /* K4   */  be_nested_str_weak(fromhex),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(reverse),
    /* K7   */  be_nested_str_weak(flag2),
    /* K8   */  be_const_int(1),
    /* K9   */  be_nested_str_weak(flag3),
    /* K10  */  be_const_int(2),
    /* K11  */  be_nested_str_weak(flag4),
    /* K12  */  be_const_int(3),
    /* K13  */  be_nested_str_weak(flag5),
    /* K14  */  be_nested_str_weak(flag6),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[54]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0xB0060101,  //  0003  RAISE	1	K0	K1
      0x94080302,  //  0004  GETIDX	R2	R1	K2
      0x600C0015,  //  0005  GETGBL	R3	G21
      0x7C0C0000,  //  0006  CALL	R3	0
      0x8C0C0704,  //  0007  GETMET	R3	R3	K4
      0x94140505,  //  0008  GETIDX	R5	R2	K5
      0x7C0C0400,  //  0009  CALL	R3	2
      0x8C0C0706,  //  000A  GETMET	R3	R3	K6
      0x7C0C0200,  //  000B  CALL	R3	1
      0x90020603,  //  000C  SETMBR	R0	K3	R3
      0x600C0015,  //  000D  GETGBL	R3	G21
      0x7C0C0000,  //  000E  CALL	R3	0
      0x8C0C0704,  //  000F  GETMET	R3	R3	K4
      0x94140508,  //  0010  GETIDX	R5	R2	K8
      0x7C0C0400,  //  0011  CALL	R3	2
      0x90020E03,  //  0012  SETMBR	R0	K7	R3
      0x600C0015,  //  0013  GETGBL	R3	G21
      0x7C0C0000,  //  0014  CALL	R3	0
      0x8C0C0704,  //  0015  GETMET	R3	R3	K4
      0x9414050A,  //  0016  GETIDX	R5	R2	K10
      0x7C0C0400,  //  0017  CALL	R3	2
      0x8C0C0706,  //  0018  GETMET	R3	R3	K6
      0x7C0C0200,  //  0019  CALL	R3	1
      0x90021203,  //  001A  SETMBR	R0	K9	R3
      0x600C0015,  //  001B  GETGBL	R3	G21
      0x7C0C0000,  //  001C  CALL	R3	0
      0x8C0C0704,  //  001D  GETMET	R3	R3	K4
      0x9414050C,  //  001E  GETIDX	R5	R2	K12
      0x7C0C0400,  //  001F  CALL	R3	2
      0x8C0C0706,  //  0020  GETMET	R3	R3	K6
      0x7C0C0200,  //  0021  CALL	R3	1
      0x90021603,  //  0022  SETMBR	R0	K11	R3
      0x600C0015,  //  0023  GETGBL	R3	G21
      0x7C0C0000,  //  0024  CALL	R3	0
      0x8C0C0704,  //  0025  GETMET	R3	R3	K4
      0x54160003,  //  0026  LDINT	R5	4
      0x94140405,  //  0027  GETIDX	R5	R2	R5
      0x7C0C0400,  //  0028  CALL	R3	2
      0x8C0C0706,  //  0029  GETMET	R3	R3	K6
      0x7C0C0200,  //  002A  CALL	R3	1
      0x90021A03,  //  002B  SETMBR	R0	K13	R3
      0x600C0015,  //  002C  GETGBL	R3	G21
      0x7C0C0000,  //  002D  CALL	R3	0
      0x8C0C0704,  //  002E  GETMET	R3	R3	K4
      0x54160004,  //  002F  LDINT	R5	5
      0x94140405,  //  0030  GETIDX	R5	R2	R5
      0x7C0C0400,  //  0031  CALL	R3	2
      0x8C0C0706,  //  0032  GETMET	R3	R3	K6
      0x7C0C0200,  //  0033  CALL	R3	1
      0x90021C03,  //  0034  SETMBR	R0	K14	R3
      0x80000000,  //  0035  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: GetOptionReader
********************************************************************/
be_local_class(GetOptionReader,
    6,
    NULL,
    be_nested_map(8,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(flag2, -1), be_const_var(1) },
        { be_const_key_weak(flag4, -1), be_const_var(3) },
        { be_const_key_weak(getoption, -1), be_const_closure(GetOptionReader_getoption_closure) },
        { be_const_key_weak(init, 5), be_const_closure(GetOptionReader_init_closure) },
        { be_const_key_weak(flag3, -1), be_const_var(2) },
        { be_const_key_weak(flag6, -1), be_const_var(5) },
        { be_const_key_weak(flag5, -1), be_const_var(4) },
        { be_const_key_weak(flag, 0), be_const_var(0) },
    })),
    be_str_weak(GetOptionReader)
);
/*******************************************************************/

void be_load_GetOptionReader_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_GetOptionReader);
    be_setglobal(vm, "GetOptionReader");
    be_pop(vm, 1);
}

extern const bclass be_class_Matter_Plugin_Bridge_HTTP;

/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_init,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(init),
    /* K2   */  be_nested_str_weak(find),
    /* K3   */  be_nested_str_weak(ARG_HTTP),
    /* K4   */  be_nested_str_weak(http_remote),
    /* K5   */  be_nested_str_weak(device),
    /* K6   */  be_nested_str_weak(register_http_remote),
    /* K7   */  be_nested_str_weak(PROBE_TIMEOUT),
    /* K8   */  be_nested_str_weak(register_cmd_cb),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0xA4120000,  //  0000  IMPORT	R4	K0
      0x60140003,  //  0001  GETGBL	R5	G3
      0x5C180000,  //  0002  MOVE	R6	R0
      0x7C140200,  //  0003  CALL	R5	1
      0x8C140B01,  //  0004  GETMET	R5	R5	K1
      0x5C1C0200,  //  0005  MOVE	R7	R1
      0x5C200400,  //  0006  MOVE	R8	R2
      0x5C240600,  //  0007  MOVE	R9	R3
      0x7C140800,  //  0008  CALL	R5	4
      0x8C140702,  //  0009  GETMET	R5	R3	K2
      0x881C0103,  //  000A  GETMBR	R7	R0	K3
      0x7C140400,  //  000B  CALL	R5	2
      0x88180105,  //  000C  GETMBR	R6	R0	K5
      0x8C180D06,  //  000D  GETMET	R6	R6	K6
      0x5C200A00,  //  000E  MOVE	R8	R5
      0x88240107,  //  000F  GETMBR	R9	R0	K7
      0x7C180600,  //  0010  CALL	R6	3
      0x90020806,  //  0011  SETMBR	R0	K4	R6
      0x8C180108,  //  0012  GETMET	R6	R0	K8
      0x7C180200,  //  0013  CALL	R6	1
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_250ms
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_every_250ms,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(http_remote),
    /* K1   */  be_nested_str_weak(scheduler),
    }),
    be_str_weak(every_250ms),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x7C040200,  //  0002  CALL	R1	1
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_value_onoff
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_web_value_onoff,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(_X3Cb_X3EOn_X3C_X2Fb_X3E),
    /* K1   */  be_nested_str_weak(Off),
    /* K2   */  be_nested_str_weak(),
    }),
    be_str_weak(web_value_onoff),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x20080202,  //  0001  NE	R2	R1	R2
      0x780A0004,  //  0002  JMPF	R2	#0008
      0x78060001,  //  0003  JMPF	R1	#0006
      0x58080000,  //  0004  LDCONST	R2	K0
      0x70020000,  //  0005  JMP		#0007
      0x58080001,  //  0006  LDCONST	R2	K1
      0x70020000,  //  0007  JMP		#0009
      0x58080002,  //  0008  LDCONST	R2	K2
      0x80040400,  //  0009  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: call_remote_sync
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_call_remote_sync,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(json),
    /* K2   */  be_const_int(2),
    /* K3   */  be_nested_str_weak(_X20),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str_weak(http_remote),
    /* K6   */  be_nested_str_weak(call_sync),
    /* K7   */  be_nested_str_weak(SYNC_TIMEOUT),
    /* K8   */  be_nested_str_weak(device_is_alive),
    /* K9   */  be_nested_str_weak(load),
    /* K10  */  be_const_int(1),
    /* K11  */  be_nested_str_weak(tasmota),
    /* K12  */  be_nested_str_weak(log),
    /* K13  */  be_nested_str_weak(MTR_X3A_X20HTTP_X20GET_X20retrying),
    /* K14  */  be_const_int(3),
    }),
    be_str_weak(call_remote_sync),
    &be_const_str_solidified,
    ( &(const binstruction[43]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xA4120200,  //  0001  IMPORT	R4	K1
      0x58140002,  //  0002  LDCONST	R5	K2
      0x4C180000,  //  0003  LDNIL	R6
      0x20180406,  //  0004  NE	R6	R2	R6
      0x781A0005,  //  0005  JMPF	R6	#000C
      0x00180303,  //  0006  ADD	R6	R1	K3
      0x601C0008,  //  0007  GETGBL	R7	G8
      0x5C200400,  //  0008  MOVE	R8	R2
      0x7C1C0200,  //  0009  CALL	R7	1
      0x00180C07,  //  000A  ADD	R6	R6	R7
      0x5C040C00,  //  000B  MOVE	R1	R6
      0x24180B04,  //  000C  GT	R6	R5	K4
      0x781A0016,  //  000D  JMPF	R6	#0025
      0x88180105,  //  000E  GETMBR	R6	R0	K5
      0x8C180D06,  //  000F  GETMET	R6	R6	K6
      0x5C200200,  //  0010  MOVE	R8	R1
      0x88240107,  //  0011  GETMBR	R9	R0	K7
      0x7C180600,  //  0012  CALL	R6	3
      0x4C1C0000,  //  0013  LDNIL	R7
      0x201C0C07,  //  0014  NE	R7	R6	R7
      0x781E0007,  //  0015  JMPF	R7	#001E
      0x881C0105,  //  0016  GETMBR	R7	R0	K5
      0x8C1C0F08,  //  0017  GETMET	R7	R7	K8
      0x50240200,  //  0018  LDBOOL	R9	1	0
      0x7C1C0400,  //  0019  CALL	R7	2
      0x8C1C0909,  //  001A  GETMET	R7	R4	K9
      0x5C240C00,  //  001B  MOVE	R9	R6
      0x7C1C0400,  //  001C  CALL	R7	2
      0x80040E00,  //  001D  RET	1	R7
      0x04140B0A,  //  001E  SUB	R5	R5	K10
      0xB81E1600,  //  001F  GETNGBL	R7	K11
      0x8C1C0F0C,  //  0020  GETMET	R7	R7	K12
      0x5824000D,  //  0021  LDCONST	R9	K13
      0x5828000E,  //  0022  LDCONST	R10	K14
      0x7C1C0600,  //  0023  CALL	R7	3
      0x7001FFE6,  //  0024  JMP		#000C
      0x88180105,  //  0025  GETMBR	R6	R0	K5
      0x8C180D08,  //  0026  GETMET	R6	R6	K8
      0x50200000,  //  0027  LDBOOL	R8	0	0
      0x7C180400,  //  0028  CALL	R6	2
      0x4C180000,  //  0029  LDNIL	R6
      0x80040C00,  //  002A  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_shadow
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_update_shadow,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str_weak(tick),
    /* K1   */  be_nested_str_weak(device),
    /* K2   */  be_nested_str_weak(call_remote_sync),
    /* K3   */  be_nested_str_weak(UPDATE_CMD),
    /* K4   */  be_nested_str_weak(parse_http_response),
    /* K5   */  be_const_int(1),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[13]) {  /* code */
      0x88040101,  //  0000  GETMBR	R1	R0	K1
      0x88040300,  //  0001  GETMBR	R1	R1	K0
      0x90020001,  //  0002  SETMBR	R0	K0	R1
      0x8C040102,  //  0003  GETMET	R1	R0	K2
      0x880C0103,  //  0004  GETMBR	R3	R0	K3
      0x7C040400,  //  0005  CALL	R1	2
      0x78060004,  //  0006  JMPF	R1	#000C
      0x8C080104,  //  0007  GETMET	R2	R0	K4
      0x58100005,  //  0008  LDCONST	R4	K5
      0x5C140200,  //  0009  MOVE	R5	R1
      0x88180103,  //  000A  GETMBR	R6	R0	K3
      0x7C080800,  //  000B  CALL	R2	4
      0x80000000,  //  000C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_local_device
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_is_local_device,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(is_local_device),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x50040000,  //  0000  LDBOOL	R1	0	0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_update
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_parse_update,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(parse_update),
    &be_const_str_solidified,
    ( &(const binstruction[ 1]) {  /* code */
      0x80000000,  //  0000  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values_prefix
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_web_values_prefix,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(webserver),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(get_name),
    /* K3   */  be_nested_str_weak(content_send),
    /* K4   */  be_nested_str_weak(format),
    /* K5   */  be_nested_str_weak(PREFIX),
    /* K6   */  be_nested_str_weak(html_escape),
    /* K7   */  be_nested_str_weak(),
    }),
    be_str_weak(web_values_prefix),
    &be_const_str_solidified,
    ( &(const binstruction[16]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0102,  //  0002  GETMET	R3	R0	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x8C100303,  //  0004  GETMET	R4	R1	K3
      0x8C180504,  //  0005  GETMET	R6	R2	K4
      0x88200105,  //  0006  GETMBR	R8	R0	K5
      0x780E0003,  //  0007  JMPF	R3	#000C
      0x8C240306,  //  0008  GETMET	R9	R1	K6
      0x5C2C0600,  //  0009  MOVE	R11	R3
      0x7C240400,  //  000A  CALL	R9	2
      0x70020000,  //  000B  JMP		#000D
      0x58240007,  //  000C  LDCONST	R9	K7
      0x7C180600,  //  000D  CALL	R6	3
      0x7C100400,  //  000E  CALL	R4	2
      0x80000000,  //  000F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_read_attribute,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(attribute),
    /* K4   */  be_nested_str_weak(create_TLV),
    /* K5   */  be_nested_str_weak(BOOL),
    /* K6   */  be_nested_str_weak(http_remote),
    /* K7   */  be_nested_str_weak(reachable),
    /* K8   */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[35]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x880C0701,  //  0001  GETMBR	R3	R3	K1
      0x88100502,  //  0002  GETMBR	R4	R2	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x541A0038,  //  0004  LDINT	R6	57
      0x1C180806,  //  0005  EQ	R6	R4	R6
      0x781A0012,  //  0006  JMPF	R6	#001A
      0x541A0010,  //  0007  LDINT	R6	17
      0x1C180A06,  //  0008  EQ	R6	R5	R6
      0x781A0006,  //  0009  JMPF	R6	#0011
      0x8C180704,  //  000A  GETMET	R6	R3	K4
      0x88200705,  //  000B  GETMBR	R8	R3	K5
      0x88240106,  //  000C  GETMBR	R9	R0	K6
      0x88241307,  //  000D  GETMBR	R9	R9	K7
      0x7C180600,  //  000E  CALL	R6	3
      0x80040C00,  //  000F  RET	1	R6
      0x70020007,  //  0010  JMP		#0019
      0x60180003,  //  0011  GETGBL	R6	G3
      0x5C1C0000,  //  0012  MOVE	R7	R0
      0x7C180200,  //  0013  CALL	R6	1
      0x8C180D08,  //  0014  GETMET	R6	R6	K8
      0x5C200200,  //  0015  MOVE	R8	R1
      0x5C240400,  //  0016  MOVE	R9	R2
      0x7C180600,  //  0017  CALL	R6	3
      0x80040C00,  //  0018  RET	1	R6
      0x70020007,  //  0019  JMP		#0022
      0x60180003,  //  001A  GETGBL	R6	G3
      0x5C1C0000,  //  001B  MOVE	R7	R0
      0x7C180200,  //  001C  CALL	R6	1
      0x8C180D08,  //  001D  GETMET	R6	R6	K8
      0x5C200200,  //  001E  MOVE	R8	R1
      0x5C240400,  //  001F  MOVE	R9	R2
      0x7C180600,  //  0020  CALL	R6	3
      0x80040C00,  //  0021  RET	1	R6
      0x80000000,  //  0022  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_web_values,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(webserver),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(web_values_prefix),
    /* K3   */  be_nested_str_weak(content_send),
    /* K4   */  be_nested_str_weak(_X26lt_X3B_X2D_X2D_X20_X28),
    /* K5   */  be_nested_str_weak(NAME),
    /* K6   */  be_nested_str_weak(_X29_X20_X2D_X2D_X26gt_X3B),
    }),
    be_str_weak(web_values),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0102,  //  0002  GETMET	R3	R0	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x8C0C0303,  //  0004  GETMET	R3	R1	K3
      0x88140105,  //  0005  GETMBR	R5	R0	K5
      0x00160805,  //  0006  ADD	R5	K4	R5
      0x00140B06,  //  0007  ADD	R5	R5	K6
      0x7C0C0400,  //  0008  CALL	R3	2
      0x80000000,  //  0009  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_http_response
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_parse_http_response,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(http_remote),
    /* K2   */  be_nested_str_weak(device_is_alive),
    /* K3   */  be_nested_str_weak(device),
    /* K4   */  be_nested_str_weak(tick),
    /* K5   */  be_nested_str_weak(json),
    /* K6   */  be_nested_str_weak(load),
    /* K7   */  be_nested_str_weak(contains),
    /* K8   */  be_nested_str_weak(StatusSNS),
    /* K9   */  be_nested_str_weak(StatusSTS),
    /* K10  */  be_nested_str_weak(StatusSHT),
    /* K11  */  be_nested_str_weak(parse_update),
    }),
    be_str_weak(parse_http_response),
    &be_const_str_solidified,
    ( &(const binstruction[39]) {  /* code */
      0x24100300,  //  0000  GT	R4	R1	K0
      0x78120023,  //  0001  JMPF	R4	#0026
      0x88100101,  //  0002  GETMBR	R4	R0	K1
      0x8C100902,  //  0003  GETMET	R4	R4	K2
      0x50180200,  //  0004  LDBOOL	R6	1	0
      0x7C100400,  //  0005  CALL	R4	2
      0x88100103,  //  0006  GETMBR	R4	R0	K3
      0x88100904,  //  0007  GETMBR	R4	R4	K4
      0xA4160A00,  //  0008  IMPORT	R5	K5
      0x8C180B06,  //  0009  GETMET	R6	R5	K6
      0x5C200400,  //  000A  MOVE	R8	R2
      0x7C180400,  //  000B  CALL	R6	2
      0x4C1C0000,  //  000C  LDNIL	R7
      0x781A0017,  //  000D  JMPF	R6	#0026
      0x8C200D07,  //  000E  GETMET	R8	R6	K7
      0x58280008,  //  000F  LDCONST	R10	K8
      0x7C200400,  //  0010  CALL	R8	2
      0x78220002,  //  0011  JMPF	R8	#0015
      0x94180D08,  //  0012  GETIDX	R6	R6	K8
      0x541E0007,  //  0013  LDINT	R7	8
      0x7002000C,  //  0014  JMP		#0022
      0x8C200D07,  //  0015  GETMET	R8	R6	K7
      0x58280009,  //  0016  LDCONST	R10	K9
      0x7C200400,  //  0017  CALL	R8	2
      0x78220002,  //  0018  JMPF	R8	#001C
      0x94180D09,  //  0019  GETIDX	R6	R6	K9
      0x541E000A,  //  001A  LDINT	R7	11
      0x70020005,  //  001B  JMP		#0022
      0x8C200D07,  //  001C  GETMET	R8	R6	K7
      0x5828000A,  //  001D  LDCONST	R10	K10
      0x7C200400,  //  001E  CALL	R8	2
      0x78220001,  //  001F  JMPF	R8	#0022
      0x94180D09,  //  0020  GETIDX	R6	R6	K9
      0x541E000C,  //  0021  LDINT	R7	13
      0x8C20010B,  //  0022  GETMET	R8	R0	K11
      0x5C280C00,  //  0023  MOVE	R10	R6
      0x5C2C0E00,  //  0024  MOVE	R11	R7
      0x7C200600,  //  0025  CALL	R8	3
      0x80000000,  //  0026  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: register_cmd_cb
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_HTTP_register_cmd_cb,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        8,                          /* nstack */
        3,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str_weak(parse_http_response),
        }),
        be_str_weak(_X3Clambda_X3E),
        &be_const_str_solidified,
        ( &(const binstruction[ 7]) {  /* code */
          0x680C0000,  //  0000  GETUPV	R3	U0
          0x8C0C0700,  //  0001  GETMET	R3	R3	K0
          0x5C140000,  //  0002  MOVE	R5	R0
          0x5C180200,  //  0003  MOVE	R6	R1
          0x5C1C0400,  //  0004  MOVE	R7	R2
          0x7C0C0800,  //  0005  CALL	R3	4
          0x80040600,  //  0006  RET	1	R3
        })
      ),
    }),
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(http_remote),
    /* K1   */  be_nested_str_weak(add_schedule),
    /* K2   */  be_nested_str_weak(UPDATE_CMD),
    /* K3   */  be_nested_str_weak(UPDATE_TIME),
    }),
    be_str_weak(register_cmd_cb),
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x880C0102,  //  0002  GETMBR	R3	R0	K2
      0x88100103,  //  0003  GETMBR	R4	R0	K3
      0x84140000,  //  0004  CLOSURE	R5	P0
      0x7C040800,  //  0005  CALL	R1	4
      0xA0000000,  //  0006  CLOSE	R0
      0x80000000,  //  0007  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Bridge_HTTP
********************************************************************/
extern const bclass be_class_Matter_Plugin_Device;
be_local_class(Matter_Plugin_Bridge_HTTP,
    1,
    &be_class_Matter_Plugin_Device,
    be_nested_map(24,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG_HTTP, 23), be_nested_str_weak(url) },
        { be_const_key_weak(register_cmd_cb, 11), be_const_closure(Matter_Plugin_Bridge_HTTP_register_cmd_cb_closure) },
        { be_const_key_weak(SYNC_TIMEOUT, -1), be_const_int(500) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_init_closure) },
        { be_const_key_weak(http_remote, -1), be_const_var(0) },
        { be_const_key_weak(GetOptionReader, 1), be_const_class(be_class_GetOptionReader) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak() },
        { be_const_key_weak(CLUSTERS, 21), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(0,
    ( (struct bmapnode*) &(const bmapnode[]) {
    }))    ) } )) },
        { be_const_key_weak(every_250ms, 12), be_const_closure(Matter_Plugin_Bridge_HTTP_every_250ms_closure) },
        { be_const_key_weak(PREFIX, -1), be_nested_str_weak(_X7C_X20_X3Ci_X3E_X25s_X3C_X2Fi_X3E_X20) },
        { be_const_key_weak(web_value_onoff, 7), be_const_closure(Matter_Plugin_Bridge_HTTP_web_value_onoff_closure) },
        { be_const_key_weak(parse_http_response, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_parse_http_response_closure) },
        { be_const_key_weak(web_values, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_web_values_closure) },
        { be_const_key_weak(TYPE, 20), be_nested_str_weak() },
        { be_const_key_weak(UPDATE_CMD, -1), be_nested_str_weak(Status_X2011) },
        { be_const_key_weak(ARG, 14), be_nested_str_weak() },
        { be_const_key_weak(is_local_device, 19), be_const_closure(Matter_Plugin_Bridge_HTTP_is_local_device_closure) },
        { be_const_key_weak(web_values_prefix, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_web_values_prefix_closure) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_read_attribute_closure) },
        { be_const_key_weak(parse_update, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_parse_update_closure) },
        { be_const_key_weak(update_shadow, 22), be_const_closure(Matter_Plugin_Bridge_HTTP_update_shadow_closure) },
        { be_const_key_weak(call_remote_sync, -1), be_const_closure(Matter_Plugin_Bridge_HTTP_call_remote_sync_closure) },
        { be_const_key_weak(PROBE_TIMEOUT, -1), be_const_int(1700) },
        { be_const_key_weak(UPDATE_TIME, -1), be_const_int(3000) },
    })),
    be_str_weak(Matter_Plugin_Bridge_HTTP)
);
/*******************************************************************/

void be_load_Matter_Plugin_Bridge_HTTP_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Bridge_HTTP);
    be_setglobal(vm, "Matter_Plugin_Bridge_HTTP");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
