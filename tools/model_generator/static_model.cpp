/*
 * static_model.cpp
 *
 * automatically generated from genericIO.icd
 */
#include <stdlib.h>
#include "model.h"

extern IedModel iedModel;
extern DataSet* datasets[];
extern ReportControlBlock* reportControlBlocks[];
extern GSEControlBlock* gseControlBlocks[];
static void initializeValues();
extern LogicalDevice iedModel_GenericIO;
extern LogicalNode   iedModel_GenericIO_LLN0;
extern DataObject    iedModel_GenericIO_LLN0_Mod;
extern DataAttribute iedModel_GenericIO_LLN0_Mod_q;
extern DataAttribute iedModel_GenericIO_LLN0_Mod_t;
extern DataAttribute iedModel_GenericIO_LLN0_Mod_ctlModel;
extern DataObject    iedModel_GenericIO_LLN0_Beh;
extern DataAttribute iedModel_GenericIO_LLN0_Beh_stVal;
extern DataAttribute iedModel_GenericIO_LLN0_Beh_q;
extern DataAttribute iedModel_GenericIO_LLN0_Beh_t;
extern DataObject    iedModel_GenericIO_LLN0_Health;
extern DataAttribute iedModel_GenericIO_LLN0_Health_stVal;
extern DataAttribute iedModel_GenericIO_LLN0_Health_q;
extern DataAttribute iedModel_GenericIO_LLN0_Health_t;
extern DataObject    iedModel_GenericIO_LLN0_NamPlt;
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_d;
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_configRev;
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_ldNs;
extern LogicalNode   iedModel_GenericIO_LPHD1;
extern DataObject    iedModel_GenericIO_LPHD1_PhyNam;
extern DataAttribute iedModel_GenericIO_LPHD1_PhyNam_vendor;
extern DataObject    iedModel_GenericIO_LPHD1_PhyHealth;
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_stVal;
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_q;
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_t;
extern DataObject    iedModel_GenericIO_LPHD1_Proxy;
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_stVal;
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_q;
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_t;
extern LogicalNode   iedModel_GenericIO_GGIO1;
extern DataObject    iedModel_GenericIO_GGIO1_Mod;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_t;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_ctlModel;
extern DataObject    iedModel_GenericIO_GGIO1_Beh;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_t;
extern DataObject    iedModel_GenericIO_GGIO1_Health;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_t;
extern DataObject    iedModel_GenericIO_GGIO1_NamPlt;
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_d;
extern DataObject    iedModel_GenericIO_GGIO1_AnIn1;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_t;
extern DataObject    iedModel_GenericIO_GGIO1_AnIn2;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_t;
extern DataObject    iedModel_GenericIO_GGIO1_AnIn3;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_t;
extern DataObject    iedModel_GenericIO_GGIO1_AnIn4;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_t;
extern DataObject    iedModel_GenericIO_GGIO1_SPCSO1;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_t;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_ctlModel;
extern DataObject    iedModel_GenericIO_GGIO1_SPCSO2;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_t;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_ctlModel;
extern DataObject    iedModel_GenericIO_GGIO1_SPCSO3;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_t;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_ctlModel;
extern DataObject    iedModel_GenericIO_GGIO1_SPCSO4;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_t;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_ctlModel;
extern DataObject    iedModel_GenericIO_GGIO1_Ind1;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_t;
extern DataObject    iedModel_GenericIO_GGIO1_Ind2;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_t;
extern DataObject    iedModel_GenericIO_GGIO1_Ind3;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_t;
extern DataObject    iedModel_GenericIO_GGIO1_Ind4;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_t;

IedModel iedModel = {
    "simpleIO",
    &iedModel_GenericIO,
    datasets,
    reportControlBlocks,
    gseControlBlocks,
    initializeValues
};

LogicalDevice iedModel_GenericIO = {
    "simpleIOGenericIO",
    NULL,
    &iedModel_GenericIO_LLN0
};

LogicalNode iedModel_GenericIO_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    &iedModel_GenericIO,
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
};

DataObject iedModel_GenericIO_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_q,
    0,
    0
};

DataAttribute iedModel_GenericIO_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_GenericIO_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_configRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_ldNs,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    0,
    EX,
    VISIBLE_STRING_255,
    NULL
};

LogicalNode iedModel_GenericIO_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    &iedModel_GenericIO,
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
};

DataObject iedModel_GenericIO_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_vendor,
    0,
    0
};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_GenericIO_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_GenericIO_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    &iedModel_GenericIO,
    NULL,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
};

DataObject iedModel_GenericIO_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_q,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_AnIn2 = {
    DataObjectModelType,
    "AnIn2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_mag,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_AnIn3 = {
    DataObjectModelType,
    "AnIn3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_mag,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_AnIn4 = {
    DataObjectModelType,
    "AnIn4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_mag,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_SPCSO1 = {
    DataObjectModelType,
    "SPCSO1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_q,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_SPCSO2 = {
    DataObjectModelType,
    "SPCSO2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_q,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_SPCSO3 = {
    DataObjectModelType,
    "SPCSO3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_q,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_SPCSO4 = {
    DataObjectModelType,
    "SPCSO4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_q,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_GenericIO_GGIO1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    NULL,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_stVal,
    0,
    0
};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};


static DataSet* datasets[] = {
  NULL,
};

static ReportControlBlock* reportControlBlocks[] = {
    NULL
};


static GSEControlBlock* gseControlBlocks[] = {
    NULL
};


static void
initializeValues()
{

iedModel_GenericIO_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_SPCSO2_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_SPCSO3_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_SPCSO4_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);
}
