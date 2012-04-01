/* $Id: MsgTemplate.h,v 1.12 2002-08-28 16:27:12 pgr Exp $ */

#ifndef MSGTEMPLATE_HEADER
#define MSGTEMPLATE_HEADER

/*---------+
| Includes |
+---------*/
#include "resgendef.h"

/*------------------------------------------------------------ MsgTemplateId -+
|                                                                             |
+----------------------------------------------------------------------------*/
enum MsgTemplateId {
   _XXX__UNKNOWN = 0,

   _YSP__FirstMessage,
   _YSP__LOCATION1WF = _YSP__FirstMessage,
   _YSP__LOCATION2WF,
   _YSP__LOCATION1,
   _YSP__LOCATION2,
   _YSP__CONTEXT1,
   _YSP__CONTEXT2,
   _YSP__FQGI,
   _YSP__BAD_BUFSIZE,
   _YSP__NOTAGC,
   _YSP__INVSTGNAME,
   _YSP__INVSTGMINI,
   _YSP__INVETGNAME,
   _YSP__INVETGMINI,
   _YSP__INVSTGEMPTY,
   _YSP__INVETGEMPTY,
   _YSP__INVETGOOC,
   _YSP__INVETGPREMA,
   _YSP__NOATTVAL,
   _YSP__DUPATTSPEC,
   _YSP__INVFIXED,
   _YSP__NOREQUIRED,
   _YSP__NOTAGOMIT,
   _YSP__NOTAGCMIN,
   _YSP__INVNETMIN,
   _YSP__UBLNLIT,
   _YSP__UBLNPI,
   _YSP__INVDLM,
   _YSP__BIGTKLIST,
   _YSP__BIGNAME,
   _YSP__BIGMLIT,
   _YSP__INVATTSPEC,
   _YSP__BIGAVL,
   _YSP__BIGPLIT,
   _YSP__INVEMPTYLIT,
   _YSP__BADMODEL,
   _YSP__DUPGI,
   _YSP__DUPATTL,
   _YSP__USPDECL,
   _YSP__INVDECL,
   _YSP__NOMDC,
   _YSP__INVNAME,
   _YSP__INVTOKEN,
   _YSP__INVTAGOMIT,
   _YSP__INVMINOMIT,
   _YSP__DUPDCLV,
   _YSP__BIGATTRIB,
   _YSP__INVADCLV,
   _YSP__INVADFTV,
   _YSP__DUPNOTDEF,
   _YSP__DUPIDDEF,
   _YSP__INVATTDCL,
   _YSP__DUPATT,
   _YSP__BIGPI,
   _YSP__INVKEYWD1,
   _YSP__INVPENTK,
   _YSP__NODSC,
   _YSP__INVNOTDCL,
   _YSP__DUPDOCTYPE,
   _YSP__INVDOCTYPE,
   _YSP__INVMSSTART,
   _YSP__INVMSEND,
   _YSP__BIGSKIP,
   _YSP__NOPS,
   _YSP__INVGROUP,
   _YSP__BIGGROUP,
   _YSP__INVKEYWD,
   _YSP__NOLIT,
   _YSP__UBLNPIC,
   _YSP__UBLNMS,
   _YSP__INVNUMCREF,
   _YSP__INVNAMCREF,
   _YSP__INVMLCHAR,
   _YSP__NOINSTANCE,
   _YSP__SUPFDOCTYPE,
   _YSP__NODTD,
   _YSP__BADDATAINDS,
   _YSP__BADDATAINMD,
   _YSP__BADCOMMENT,
   _YSP__INVOPTION,
   _YSP__INVSAVEDIR,
   _YSP__BADDECL,
   _YSP__INVDELIM,
   _YSP__UBLNCOM,
   _YSP__WILDDECL,
   _YSP__NOXMLVER,
   _YSP__BADXMLPI,

   _SDCL__DUPDIC,
   _SDCL__DUPDLM,

   _ELM__INVSTGEMPTY,
   _ELM__INVDATAEMPTY,
   _ELM__INVSTGCDATA,
   _ELM__NOERROR,
   _ELM__INVSTGCLOSE,
   _ELM__INVDATACLOSE,
   _ELM__INVSTGOOC,
   _ELM__INVDATAOOC,
   _ELM__INVSTGNOCNT,
   _ELM__INVDATANOCNT,
   _ELM__STGNOTSYNCH,
   _ELM__DATANOTSYNCH,
   _ELM__ENDNOTSYNCH,

   _ENT__DUPNOTNAME,
   _ENT__NOENTGENDEF,
   _ENT__NOENTPARDEF,
   _ENT__INVRECURSE,
   _ENT__BADOPENDOC,
   _ENT__BADOPENDTD,
   _ENT__BADOPEN,

   _REX__0_0,
   _REX__1_0,
   _REX__2_0,
   _REX__3_0,
   _REX__4_0,
   _REX__5_0,
   _REX__6_0,
   _REX__7_0,
   _REX__8_0,
   _REX__9_0,
   _REX__10_0,
   _REX__11_0,
   _REX__12_0,
   _REX__13_0,
   _REX__14_0,
   _REX__15_0,
   _REX__16_0,
   _REX__17_0,
   _REX__18_0,
   _REX__19_0,
   _REX__20_0,
   _REX__21_0,
   _REX__22_0,
   _REX__23_0,
   _REX__24_0,
   _REX__25_0,
   _REX__26_0,
   _REX__27_0,
   _REX__28_0,
   _REX__29_0,
   _REX__30_0,
   _REX__31_0,
   _REX__32_0,
   _REX__33_0,
   _REX__34_0,
   _REX__35_0,
   _REX__36_0,
   _REX__37_0,
   _REX__38_0,
   _REX__39_0,
   _REX__40_0,
   _REX__41_0,
   _REX__42_0,
   _REX__43_0,
   _REX__44_0,
   _REX__45_0,
   _REX__46_0,
   _REX__47_0,
   _REX__48_0,
   _REX__49_0,
   _REX__50_0,
   _REX__51_0,
   _REX__52_0,
   _REX__53_0,
   _REX__54_0,
   _REX__0_1,
   _REX__0_2,
   _REX__0_3,
   _REX__0_4,
   _REX__0_5,
   _REX__0_6,
   _REX__0_7,
   _REX__0_8,
   _REX__2_1,
   _REX__2_2,
   _REX__3_1,
   _REX__4_1,
   _REX__5_1,
   _REX__6_1,
   _REX__6_2,
   _REX__6_3,
   _REX__7_1,
   _REX__7_2,
   _REX__7_3,
   _REX__8_1,
   _REX__8_2,
   _REX__9_1,
   _REX__9_2,
   _REX__10_1,
   _REX__10_2,
   _REX__10_3,
   _REX__10_4,
   _REX__10_5,
   _REX__10_6,
   _REX__13_1,
   _REX__14_1,
   _REX__14_2,
   _REX__14_3,
   _REX__14_4,
   _REX__15_1,
   _REX__15_2,
   _REX__15_3,
   _REX__15_4,
   _REX__16_1,
   _REX__16_2,
   _REX__16_3,
   _REX__17_1,
   _REX__18_1,
   _REX__18_2,
   _REX__19_1,
   _REX__19_2,
   _REX__19_3,
   _REX__19_4,
   _REX__19_6,
   _REX__19_7,
   _REX__20_1,
   _REX__20_2,
   _REX__21_1,
   _REX__22_1,
   _REX__23_1,
   _REX__24_1,
   _REX__25_1,
   _REX__25_2,
   _REX__25_3,
   _REX__25_4,
   _REX__25_5,
   _REX__25_6,
   _REX__25_7,
   _REX__25_8,
   _REX__25_9,
   _REX__25_11,
   _REX__25_12,
   _REX__25_13,
   _REX__25_14,
   _REX__25_15,
   _REX__25_16,
   _REX__25_17,
   _REX__26_1,
   _REX__26_2,
   _REX__26_3,
   _REX__26_4,
   _REX__26_5,
   _REX__26_6,
   _REX__26_7,
   _REX__26_8,
   _REX__26_11,
   _REX__26_12,
   _REX__27_1,
   _REX__28_1,
   _REX__28_2,
   _REX__28_3,
   _REX__28_4,
   _REX__29_1,
   _REX__30_1,
   _REX__30_2,
   _REX__31_1,
   _REX__31_2,
   _REX__31_3,
   _REX__33_1,
   _REX__33_2,
   _REX__33_3,
   _REX__34_1,
   _REX__34_2,
   _REX__34_3,
   _REX__34_4,
   _REX__34_5,
   _REX__34_6,
   _REX__35_1,
   _REX__37_1,
   _REX__37_2,
   _REX__38_1,
   _REX__38_2,
   _REX__38_3,
   _REX__40_1,
   _REX__40_3,
   _REX__40_4,
   _REX__40_5,
   _REX__40_9,
   _REX__40_11,
   _REX__40_12,
   _REX__40_13,
   _REX__40_14,
   _REX__40_15,
   _REX__40_16,
   _REX__40_17,
   _REX__40_18,
   _REX__40_19,
   _REX__40_21,
   _REX__40_23,
   _REX__40_24,
   _REX__40_25,
   _REX__40_26,
   _REX__40_27,
   _REX__40_28,
   _REX__40_29,
   _REX__40_31,
   _REX__40_32,
   _REX__40_33,
   _REX__40_34,
   _REX__40_35,
   _REX__40_36,
   _REX__40_37,
   _REX__40_38,
   _REX__40_39,
   _REX__40_41,
   _REX__40_42,
   _REX__40_43,
   _REX__40_44,
   _REX__40_45,
   _REX__40_46,
   _REX__41_1,
   _REX__41_2,
   _REX__41_3,
   _REX__41_4,
   _REX__41_5,
   _REX__41_6,
   _REX__41_7,
   _REX__42_1,
   _REX__42_2,
   _REX__42_3,
   _REX__43_1,
   _REX__44_1,
   _REX__45_1,
   _REX__46_1,
   _REX__47_1,
   _REX__48_1,
   _REX__49_1,
   _REX__50_1,
   _REX__51_1,
   _REX__53_1,
   _REX__53_2,
   _REX__53_3,
   _REX__54_1,

   _SMP__USAGE00,
   _SMP__USAGE01,
   _SMP__USAGE02,
   _SMP__USAGE03,
   _SMP__USAGE04,
   _SMP__USAGE05,
   _SMP__USAGE06,
   _SMP__USAGE07,
   _SMP__USAGE08,
   _SMP__USAGE09,
   _SMP__USAGE10,
   _SMP__USAGE11,
   _SMP__USAGE12,
   _SMP__USAGE13,
   _SMP__USAGE14,
   _SMP__USAGE15,
   _SMP__USAGE16,
   _SMP__USAGE17,
   _SMP__USAGE18,
   _SMP__USAGE19,
   _SMP__USAGE20,
   _SMP__USAGE21,
   _SMP__USAGE22,
   _SMP__OPTUNKNOWN,
   _SMP__OPTNOVAL,
   _SMP__OPTNOVALNUM,
   _SMP__OPTMISPLACED,
   _SMP__OPTWAITLINE,
   _SMP__OPTCHKPTS,
   _SMP__OPTWAITELT,
   _SMP__BADLOGFILE,
   _SMP__NOPARSER,
   _SMP__CANTPARSE,
   _SMP__SETEMPTIES,
   _SMP__BLANKCOMPRESS,
   _SMP__ENDREVIEW,
   _SMP__CHKPT,
   _SMP__BIGLVL,
   _SMP__CANTOPENENT,
   _SMP__CANTOPENDTD,
   _SMP__OPENDTD,
   _SMP__BIGSEPA,

    XXX__END
};

RESOURCES_API char const * getMsgTemplate(MsgTemplateId id);
RESOURCES_API bool isRxMessage(MsgTemplateId id);
RESOURCES_API MsgTemplateId getRxMainId(MsgTemplateId subid);
RESOURCES_API MsgTemplateId getRxMainId(int mainNo);
RESOURCES_API int getRxMainCodeNo(MsgTemplateId subid);
RESOURCES_API int getRxSubCodeNo(MsgTemplateId subid);

#endif /* MSGTEMPLATE_HEADER ================================================*/