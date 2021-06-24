/* Include files */

#include "modelInterface.h"
#include "m_fDGNuntfny3gwrKhJ5RePH.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 23,    /* lineNo */
  "GetJacobianBlock",                  /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetJacobianBlock"
  ".m"                                 /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/matlab/system/+matlab/+system/+mixin/Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 8,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 36,  /* lineNo */
  "GetJacobianBlock",                  /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetJacobianBlock"
  ".m"                                 /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 106, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 153, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 165, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 131, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 144, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 140, /* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 27,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 38,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 37,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 44,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 52,  /* lineNo */
  "collisionBox",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/collisionBox.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 65,  /* lineNo */
  "collisionBox",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/collisionBox.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 50,  /* lineNo */
  "CollisionGeometryBase",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/+robotics/+core/+internal/CollisionGeometryBase.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 125, /* lineNo */
  "collisionBox",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/collisionBox.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 35, /* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 86, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 96, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 25, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 30, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 43, /* lineNo */
  "GetJacobianBlock",                  /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetJacobianBlock"
  ".m"                                 /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 904,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 906,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 911,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 915,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 934,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 939,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 947,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 79, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 1398,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 76, /* lineNo */
  "validateattributes",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 1190,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 1197,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 28, /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 511,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 395,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 398,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 48, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 23, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 22, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2rotm.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 39, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2rotm.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+internal/+validation/validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+internal/normalizeRows.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 1446,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 1450,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 1155,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 1161,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 374,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnan.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 47,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 283, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 123, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 118, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 13,  /* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 43,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 33,    /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 908, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 908, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 1160,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  948,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  948,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 948, /* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  948,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 948, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  926,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 926, /* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  923,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 930,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "GetJacobianBlock",                  /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GetJacobianBlock"
  ".m"                                 /* pName */
};

static emlrtBCInfo f_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  931,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  1161,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  916,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  925,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 925, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  936,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 936, /* lineNo */
  26,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  917,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 31,  /* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1201,                                /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  1196,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 1196,/* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  1196,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 1196,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 1193,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  1194,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1197,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1201,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1201,                                /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 1201,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo jc_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnan.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 283,/* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 118,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 123,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(const emlrtStack *sp,
  robotics_slmanip_internal_block_GetJacobianBlock *obj);
static void GetJacobianBlock_setupImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GetJacobianBlock *obj);
static robotics_manip_internal_RigidBody_1 *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody_1 *obj);
static boolean_T b_strcmp(emxArray_char_T *b_a);
static boolean_T c_strcmp(emxArray_char_T *b_a);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj);
static robotics_manip_internal_RigidBody_1 *b_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj);
static robotics_manip_internal_RigidBody_1 *c_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj);
static robotics_manip_internal_RigidBody_1 *d_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj);
static robotics_manip_internal_RigidBody_1 *e_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj);
static robotics_manip_internal_RigidBody_1 *f_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void mw__internal__call__reset(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance, const emlrtStack *sp, real_T b_u0[6], real_T c_y0[36]);
static void RigidBodyTree_forwardKinematics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T qvec[6], emxArray_cell_wrap
  *Ttree);
static boolean_T d_strcmp(emxArray_char_T *b_a);
static void axang2tform(const emlrtStack *sp, real_T axang_data[], int32_T
  axang_size[2], real_T H[16]);
static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody_1 *obj);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static const mxArray *message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location);
static void RigidBodyTree_validateConfiguration(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T Q[6]);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetJacobianBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_unnamed_struct(emxArray_unnamed_struct **pEmxArray, int32_T
  numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody_1
  pMatrix[6]);
static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxFree_unnamed_struct(emxArray_unnamed_struct **pEmxArray);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody_1
  pMatrix[6]);
static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetJacobianBlock *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_unnamed_struc(emxArray_unnamed_struct *emxArray,
  int32_T oldNumel);
static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions);
static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray);
static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel);
static void init_simulink_io_address(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2012b(&st, "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->b_y0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance)
{
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance)
{
  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__call__setup(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  robotics_slmanip_internal_block_GetJacobianBlock *obj;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &g_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static void SystemCore_setup(const emlrtStack *sp,
  robotics_slmanip_internal_block_GetJacobianBlock *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  GetJacobianBlock_setupImpl(&st, obj);
}

static void GetJacobianBlock_setupImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GetJacobianBlock *obj)
{
  static int8_T iv[12] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &h_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &j_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  obj->TreeInternal.Bodies[0] = RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[0]);
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  b_st.site = &k_emlrtRSI;
  obj->TreeInternal.Bodies[1] = b_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[1]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  b_st.site = &k_emlrtRSI;
  obj->TreeInternal.Bodies[2] = c_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[2]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  b_st.site = &k_emlrtRSI;
  obj->TreeInternal.Bodies[3] = d_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[3]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  b_st.site = &k_emlrtRSI;
  obj->TreeInternal.Bodies[4] = e_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[4]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  b_st.site = &k_emlrtRSI;
  obj->TreeInternal.Bodies[5] = f_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[5]);
  obj->TreeInternal.Bodies[5]->Index = 6.0;
  obj->TreeInternal.NumBodies = 6.0;
  obj->TreeInternal.PositionNumber = 6.0;
  obj->TreeInternal.VelocityNumber = 6.0;
  for (i = 0; i < 12; i++) {
    obj->TreeInternal.PositionDoFMap[i] = (real_T)iv[i];
  }

  b_st.site = &l_emlrtRSI;
  g_RigidBody_RigidBody(&b_st, &obj->TreeInternal.Base);
}

static robotics_manip_internal_RigidBody_1 *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '1' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal[i] = cv[i];
  }

  b_obj->ParentIndex = 0.0;
  st.site = &n_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &o_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static boolean_T b_strcmp(emxArray_char_T *b_a)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_a->size[1] == 8) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (b_a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *b_a)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_a->size[1] == 9) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (b_a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj)
{
  b_robotics_manip_internal_CollisionGeometry *c_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_unnamed_struct *r;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  emxInit_unnamed_struct(&r, 2);
  b_obj = obj;
  st.site = &q_emlrtRSI;
  b_obj->MaxElements = 0.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &b_emlrtDCI, sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &emlrtDCI, sp);
  emxEnsureCapacity_unnamed_struc(r, i);
  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = r->size[0];
  b_obj->CollisionGeometries->size[1] = r->size[1];
  emxEnsureCapacity_unnamed_struc(b_obj->CollisionGeometries, i);
  st.site = &r_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  collisioncodegen_makeBox(0.0, 0.0, 0.0);
  st.site = &s_emlrtRSI;
  c_obj = &b_obj->_pobj0;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, sp);
  emxFree_unnamed_struct(&r);
  for (b_i = 0; b_i <= i; b_i++) {
    st.site = &t_emlrtRSI;
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &emlrtBCI, sp)] = c_obj;
  }

  return b_obj;
}

static robotics_manip_internal_RigidBody_1 *b_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static real_T dv[16] = { 6.123233995736766E-17, 0.0, 1.0, 0.0, -1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, -6.123233995736766E-17,
    -1.0, 3.749399456654644E-33, 0.0, -0.0016059121610873389,
    -0.019999999999999869, 0.49999999999999972, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '2' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  st.site = &n_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &o_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody_1 *c_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.29999999999999988, 0.0, -0.039999999999999876, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '3' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal[i] = cv[i];
  }

  b_obj->ParentIndex = 2.0;
  st.site = &n_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &o_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody_1 *d_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    1.2246467991473532E-16, 0.0, 0.0, -1.2246467991473532E-16, -1.0, 0.0,
    0.19999999999999973, 0.0, 0.06, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '4' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  st.site = &n_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &o_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody_1 *e_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static real_T dv[16] = { 6.123233995736766E-17, 1.0, -0.0, 0.0,
    -6.123233995736766E-17, 3.749399456654644E-33, -1.0, 0.0, -1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, 0.35499999999999965,
    -0.31419172052838129, -1.1326384463217128E-5, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '5' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  st.site = &n_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &o_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody_1 *f_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static real_T dv[16] = { 6.123233995736766E-17, 1.0, -0.0, 0.0,
    -6.123233995736766E-17, 3.749399456654644E-33, 1.0, 0.0, 1.0,
    -6.123233995736766E-17, 6.123233995736766E-17, 0.0, -0.36500000000000044,
    -0.31419172052838129, -1.1326384463217291E-5, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '6' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  st.site = &n_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &o_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T bname[4] = { 'B', 'a', 's', 'e' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &m_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 4; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &bb_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  st.site = &cb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static void mw__internal__call__reset(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  robotics_slmanip_internal_block_GetJacobianBlock *obj;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &db_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance, const emlrtStack *sp, real_T b_u0[6], real_T c_y0[36])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv7[2] = { 1, 5 };

  static char_T f_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T b_a[5] = { 'B', 'o', 'd', 'y', '6' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '6' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  static int8_T iv5[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emlrtStack *b_sp;
  emxArray_cell_wrap *Ttree;
  emxArray_char_T *bname;
  emxArray_real_T *JacSlice;
  emxArray_real_T *b_b;
  emxArray_real_T *c_b;
  emxArray_real_T *d_b;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *r;
  robotics_manip_internal_RigidBodyTree *b_obj;
  robotics_manip_internal_RigidBody_1 *body;
  robotics_slmanip_internal_block_GetJacobianBlock *obj;
  real_T b_R[36];
  real_T T1[16];
  real_T T2[16];
  real_T T2inv[16];
  real_T Tdh[16];
  real_T b_T2inv[16];
  real_T c_R[9];
  real_T d_R[9];
  real_T dv[9];
  real_T qvec[6];
  real_T e_R[3];
  real_T idx[2];
  real_T R;
  int32_T iv6[2];
  int32_T b_i;
  int32_T endeffectorIndex;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T ret;
  char_T e_u[46];
  char_T u[45];
  char_T b_bname[5];
  char_T e_b[5];
  char_T c_u[4];
  boolean_T b_bool;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &eb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_obj = &obj->TreeInternal;
  for (i = 0; i < 6; i++) {
    qvec[i] = b_u0[i];
  }

  emxInit_real_T(&b_b, 2);
  emxInit_cell_wrap(&Ttree, 2);
  d_st.site = &gb_emlrtRSI;
  RigidBodyTree_validateConfiguration(&d_st, &obj->TreeInternal, qvec);
  d_st.site = &hb_emlrtRSI;
  RigidBodyTree_forwardKinematics(&d_st, &obj->TreeInternal, qvec, Ttree);
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = 6;
  R = emlrtNonNegativeCheckR2012b(obj->TreeInternal.VelocityNumber, &c_emlrtDCI,
    &c_st);
  b_b->size[1] = (int32_T)emlrtIntegerCheckR2012b(R, &d_emlrtDCI, &c_st);
  emxEnsureCapacity_real_T(b_b, i);
  R = emlrtNonNegativeCheckR2012b(obj->TreeInternal.VelocityNumber, &c_emlrtDCI,
    &c_st);
  ret = 6 * (int32_T)emlrtIntegerCheckR2012b(R, &d_emlrtDCI, &c_st) - 1;
  for (i = 0; i <= ret; i++) {
    b_b->data[i] = 0.0;
  }

  for (b_i = 0; b_i < 6; b_i++) {
    qvec[b_i] = 0.0;
  }

  emxInit_char_T(&bname, 2);
  d_st.site = &ib_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  ret = b_obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= ret; i++) {
    bname->data[i] = b_obj->Base.NameInternal->data[i];
  }

  b_bool = false;
  if (5 == bname->size[1]) {
    ret = 1;
    do {
      exitg1 = 0;
      if (ret - 1 < 5) {
        if (cv[ret - 1] != bname->data[ret - 1]) {
          exitg1 = 1;
        } else {
          ret++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    for (i = 0; i < 16; i++) {
      T2inv[i] = 0.0;
    }

    for (ret = 0; ret < 4; ret++) {
      T2inv[ret + (ret << 2)] = 1.0;
    }

    for (i = 0; i < 16; i++) {
      T2[i] = 0.0;
    }

    for (ret = 0; ret < 4; ret++) {
      T2[ret + (ret << 2)] = 1.0;
    }
  } else {
    d_st.site = &jb_emlrtRSI;
    e_st.site = &ec_emlrtRSI;
    endeffectorIndex = -2;
    f_st.site = &gc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = b_obj->Base.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    ret = b_obj->Base.NameInternal->size[1] - 1;
    for (i = 0; i <= ret; i++) {
      bname->data[i] = b_obj->Base.NameInternal->data[i];
    }

    b_bool = false;
    if (bname->size[1] == 5) {
      ret = 1;
      do {
        exitg1 = 0;
        if (ret - 1 < 5) {
          if (bname->data[ret - 1] != cv[ret - 1]) {
            exitg1 = 1;
          } else {
            ret++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      endeffectorIndex = -1;
    } else {
      R = obj->TreeInternal.NumBodies;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, R, mxDOUBLE_CLASS, (int32_T)R,
        &b_emlrtRTEI, &e_st);
      b_i = 0;
      exitg2 = false;
      while ((!exitg2) && (b_i <= (int32_T)R - 1)) {
        f_st.site = &hc_emlrtRSI;
        body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5,
          &g_emlrtBCI, &f_st)];
        for (i = 0; i < 5; i++) {
          b_bname[i] = body->NameInternal[i];
        }

        for (i = 0; i < 5; i++) {
          e_b[i] = b_a[i];
        }

        ret = memcmp(&b_bname[0], &e_b[0], 5);
        if (ret == 0) {
          endeffectorIndex = b_i;
          exitg2 = true;
        } else {
          b_i++;
        }
      }
    }

    if (endeffectorIndex + 1 == -1) {
      e_st.site = &fc_emlrtRSI;
      for (i = 0; i < 46; i++) {
        e_u[i] = f_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&e_st, 46, m, &e_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 46; i++) {
        e_u[i] = f_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&e_st, 46, m, &e_u[0]);
      emlrtAssign(&e_y, m);
      for (i = 0; i < 5; i++) {
        b_bname[i] = b_a[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &b_bname[0]);
      emlrtAssign(&f_y, m);
      f_st.site = &mc_emlrtRSI;
      error(&f_st, d_y, getString(&f_st, message(&f_st, e_y, f_y, &n_emlrtMCI),
             &n_emlrtMCI), &n_emlrtMCI);
    }

    body = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b
      (endeffectorIndex, 0, 5, &h_emlrtBCI, &c_st)];
    for (i = 0; i < 16; i++) {
      i1 = Ttree->size[1] - 1;
      T2[i] = Ttree->data[emlrtDynamicBoundsCheckR2012b(endeffectorIndex, 0, i1,
        &k_emlrtBCI, &c_st)].f1[i];
    }

    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < 3; i1++) {
        c_R[i1 + 3 * i] = Ttree->data[endeffectorIndex].f1[i + (i1 << 2)];
      }
    }

    for (i = 0; i < 9; i++) {
      d_R[i] = -c_R[i];
    }

    for (i = 0; i < 3; i++) {
      e_R[i] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        R = e_R[i] + d_R[i + 3 * i1] * Ttree->data[endeffectorIndex].f1[i1 + 12];
        T2inv[i1 + (i << 2)] = c_R[i1 + 3 * i];
        e_R[i] = R;
      }

      T2inv[i + 12] = e_R[i];
    }

    for (i = 0; i < 4; i++) {
      T2inv[(i << 2) + 3] = (real_T)iv5[i];
    }

    qvec[emlrtDynamicBoundsCheckR2012b(endeffectorIndex + 1, 1, 6, &e_emlrtBCI,
      &c_st) - 1] = 1.0;
    while (body->ParentIndex > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &h_emlrtDCI, &c_st)
        - 1;
      body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5, &i_emlrtBCI,
        &c_st)];
      i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, &c_st);
      qvec[emlrtDynamicBoundsCheckR2012b(i, 1, 6, &d_emlrtBCI, &c_st) - 1] = 1.0;
    }
  }

  emxFree_char_T(&bname);
  R = obj->TreeInternal.NumBodies;
  i = (int32_T)R - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, R, mxDOUBLE_CLASS, (int32_T)R,
    &c_emlrtRTEI, &c_st);
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&c_b, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &f_emlrtBCI,
      &c_st)];
    if (!d_strcmp(body->JointInternal.Type)) {
      d_st.site = &kb_emlrtRSI;
      if (qvec[b_i] != 0.0) {
        for (i1 = 0; i1 < 16; i1++) {
          endeffectorIndex = Ttree->size[1] - 1;
          i2 = (int32_T)emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI, &c_st)
            - 1;
          T1[i1] = Ttree->data[emlrtDynamicBoundsCheckR2012b(i2, 0,
            endeffectorIndex, &j_emlrtBCI, &c_st)].f1[i1];
        }

        d_st.site = &lb_emlrtRSI;
        b_sp = &d_st;
        r = RigidBody_get_Joint(b_sp, body);
        for (i1 = 0; i1 < 16; i1++) {
          Tdh[i1] = r->ChildToJointTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 3; endeffectorIndex++) {
            c_R[endeffectorIndex + 3 * i1] = Tdh[i1 + (endeffectorIndex << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          d_R[i1] = -c_R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          e_R[i1] = 0.0;
          for (endeffectorIndex = 0; endeffectorIndex < 3; endeffectorIndex++) {
            e_R[i1] += d_R[i1 + 3 * endeffectorIndex] * Tdh[endeffectorIndex +
              12];
          }
        }

        for (i1 = 0; i1 < 4; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 4; endeffectorIndex++) {
            b_T2inv[i1 + (endeffectorIndex << 2)] = 0.0;
            for (i2 = 0; i2 < 4; i2++) {
              b_T2inv[i1 + (endeffectorIndex << 2)] += T2inv[i1 + (i2 << 2)] *
                T1[i2 + (endeffectorIndex << 2)];
            }
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 3; endeffectorIndex++) {
            Tdh[endeffectorIndex + (i1 << 2)] = c_R[endeffectorIndex + 3 * i1];
          }

          Tdh[i1 + 12] = e_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tdh[(i1 << 2) + 3] = (real_T)iv5[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 4; endeffectorIndex++) {
            T1[i1 + (endeffectorIndex << 2)] = 0.0;
            for (i2 = 0; i2 < 4; i2++) {
              T1[i1 + (endeffectorIndex << 2)] += b_T2inv[i1 + (i2 << 2)] *
                Tdh[i2 + (endeffectorIndex << 2)];
            }
          }
        }

        for (i1 = 0; i1 < 2; i1++) {
          idx[i1] = b_obj->PositionDoFMap[b_i + 6 * i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 3; endeffectorIndex++) {
            c_R[endeffectorIndex + 3 * i1] = T1[endeffectorIndex + (i1 << 2)];
          }
        }

        e_st.site = &mb_emlrtRSI;
        RigidBody_get_Joint(&e_st, body);
        e_st.site = &mb_emlrtRSI;
        b_sp = &e_st;
        r = RigidBody_get_Joint(b_sp, body);
        i1 = 6 * r->MotionSubspace->size[1];
        endeffectorIndex = c_b->size[0] * c_b->size[1];
        c_b->size[0] = 6;
        f_st.site = &mb_emlrtRSI;
        b_sp = &f_st;
        r = RigidBody_get_Joint(b_sp, body);
        c_b->size[1] = r->MotionSubspace->size[1];
        emxEnsureCapacity_real_T(c_b, endeffectorIndex);
        ret = i1 - 1;
        g_st.site = &mb_emlrtRSI;
        b_sp = &g_st;
        r = RigidBody_get_Joint(b_sp, body);
        for (i1 = 0; i1 <= ret; i1++) {
          c_b->data[i1] = r->MotionSubspace->data[i1];
        }

        d_R[0] = 0.0;
        d_R[3] = -T1[14];
        d_R[6] = T1[13];
        d_R[1] = T1[14];
        d_R[4] = 0.0;
        d_R[7] = -T1[12];
        d_R[2] = -T1[13];
        d_R[5] = T1[12];
        d_R[8] = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 3; endeffectorIndex++) {
            dv[i1 + 3 * endeffectorIndex] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              dv[i1 + 3 * endeffectorIndex] += d_R[i1 + 3 * i2] * c_R[i2 + 3 *
                endeffectorIndex];
            }

            b_R[endeffectorIndex + 6 * i1] = c_R[endeffectorIndex + 3 * i1];
            b_R[endeffectorIndex + 6 * (i1 + 3)] = 0.0;
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (endeffectorIndex = 0; endeffectorIndex < 3; endeffectorIndex++) {
            b_R[(endeffectorIndex + 6 * i1) + 3] = dv[endeffectorIndex + 3 * i1];
            b_R[(endeffectorIndex + 6 * (i1 + 3)) + 3] = c_R[endeffectorIndex +
              3 * i1];
          }
        }

        h_st.site = &nb_emlrtRSI;
        mtimes(b_R, c_b, JacSlice);
        if (idx[0] > idx[1]) {
          i1 = 0;
          endeffectorIndex = -1;
        } else {
          i1 = b_b->size[1];
          endeffectorIndex = (int32_T)emlrtIntegerCheckR2012b(idx[0],
            &f_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(endeffectorIndex, 1, i1,
            &c_emlrtBCI, &g_st) - 1;
          endeffectorIndex = b_b->size[1];
          i2 = (int32_T)emlrtIntegerCheckR2012b(idx[1], &e_emlrtDCI, &g_st);
          endeffectorIndex = emlrtDynamicBoundsCheckR2012b(i2, 1,
            endeffectorIndex, &b_emlrtBCI, &g_st) - 1;
        }

        iv6[0] = 6;
        iv6[1] = (endeffectorIndex - i1) + 1;
        emlrtSubAssignSizeCheckR2012b(iv6, 2, *(int32_T (*)[2])JacSlice->size, 2,
          &emlrtECI, &g_st);
        ret = JacSlice->size[1];
        for (endeffectorIndex = 0; endeffectorIndex < ret; endeffectorIndex++) {
          for (i2 = 0; i2 < 6; i2++) {
            b_b->data[i2 + 6 * (i1 + endeffectorIndex)] = JacSlice->data[i2 + 6 *
              endeffectorIndex];
          }
        }
      }
    }
  }

  emxFree_real_T(&c_b);
  emxFree_real_T(&JacSlice);
  emxFree_cell_wrap(&Ttree);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_R[i1 + 6 * i] = T2[i1 + (i << 2)];
      b_R[i1 + 6 * (i + 3)] = 0.0;
      b_R[(i1 + 6 * i) + 3] = 0.0;
      b_R[(i1 + 6 * (i + 3)) + 3] = T2[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&d_b, 2);
  i = d_b->size[0] * d_b->size[1];
  d_b->size[0] = 6;
  d_b->size[1] = b_b->size[1];
  emxEnsureCapacity_real_T(d_b, i);
  ret = b_b->size[1];
  for (i = 0; i < ret; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      d_b->data[i1 + 6 * i] = b_b->data[i1 + 6 * i];
    }
  }

  d_st.site = &nb_emlrtRSI;
  mtimes(b_R, d_b, b_b);
  emxFree_real_T(&d_b);
  for (i = 0; i < 2; i++) {
    iv6[i] = 6;
  }

  emlrtSubAssignSizeCheckR2012b(iv6, 2, *(int32_T (*)[2])b_b->size, 2,
    &b_emlrtECI, &b_st);
  for (i = 0; i < 36; i++) {
    c_y0[i] = b_b->data[i];
  }

  emxFree_real_T(&b_b);
}

static void RigidBodyTree_forwardKinematics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T qvec[6], emxArray_cell_wrap
  *Ttree)
{
  static const int32_T iv1[2] = { 1, 28 };

  static const int32_T iv10[2] = { 1, 15 };

  static const int32_T iv11[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 21 };

  static const int32_T iv3[2] = { 1, 28 };

  static const int32_T iv4[2] = { 1, 21 };

  static const int32_T iv5[2] = { 1, 39 };

  static const int32_T iv6[2] = { 1, 15 };

  static const int32_T iv7[2] = { 1, 45 };

  static const int32_T iv8[2] = { 1, 39 };

  static char_T j_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T h_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T b_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T d_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  static char_T i_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv9[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_RigidBody_1 *body;
  real_T b_a[16];
  real_T b_b[16];
  real_T c_a[16];
  real_T c_b[16];
  real_T qvec_data[6];
  real_T v_data[4];
  real_T v[3];
  real_T k;
  real_T n;
  real_T pnum;
  int32_T v_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T jtilecol;
  int32_T ntilecols;
  char_T g_u[45];
  char_T e_u[39];
  char_T u[28];
  char_T c_u[21];
  char_T f_u[15];
  int8_T t0_f1[16];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  n = obj->NumBodies;
  st.site = &qb_emlrtRSI;
  for (i = 0; i < 16; i++) {
    t0_f1[i] = iv[i];
  }

  b_st.site = &sb_emlrtRSI;
  if ((n != muDoubleScalarFloor(n)) || muDoubleScalarIsInf(n) || (n <
       -2.147483648E+9) || (n > 2.147483647E+9)) {
    for (i = 0; i < 28; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&f_y, m);
    c_st.site = &uc_emlrtRSI;
    error(&c_st, y, getString(&c_st, c_message(&c_st, c_y, d_y, f_y, &h_emlrtMCI),
           &h_emlrtMCI), &h_emlrtMCI);
  }

  if (n <= 0.0) {
    pnum = 0.0;
  } else {
    pnum = n;
  }

  if (!(pnum <= 2.147483647E+9)) {
    for (i = 0; i < 21; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      c_u[i] = d_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &tc_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &i_emlrtMCI),
           &i_emlrtMCI), &i_emlrtMCI);
  }

  emlrtNonNegativeCheckR2012b(n, &j_emlrtDCI, &st);
  i = Ttree->size[0] * Ttree->size[1];
  Ttree->size[0] = 1;
  Ttree->size[1] = (int32_T)n;
  emxEnsureCapacity_cell_wrap(Ttree, i);
  if ((int32_T)n != 0) {
    ntilecols = (int32_T)n - 1;
    for (jtilecol = 0; jtilecol <= ntilecols; jtilecol++) {
      for (i = 0; i < 16; i++) {
        Ttree->data[jtilecol].f1[i] = (real_T)t0_f1[i];
      }
    }
  }

  k = 1.0;
  i = (int32_T)n - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &d_emlrtRTEI, sp);
  emxInit_char_T(&switch_expression, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &o_emlrtBCI, sp)];
    pnum = body->JointInternal.PositionNumber;
    n = (k + pnum) - 1.0;
    if (k > n) {
      i1 = 0;
      i2 = -1;
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(k, &l_emlrtDCI, sp);
      i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &n_emlrtBCI, sp) - 1;
      i2 = (int32_T)emlrtIntegerCheckR2012b(n, &k_emlrtDCI, sp);
      i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 6, &m_emlrtBCI, sp) - 1;
    }

    st.site = &rb_emlrtRSI;
    for (i3 = 0; i3 < 16; i3++) {
      b_a[i3] = body->JointInternal.JointToParentTransform[i3];
    }

    b_st.site = &tb_emlrtRSI;
    i3 = switch_expression->size[0] * switch_expression->size[1];
    switch_expression->size[0] = 1;
    switch_expression->size[1] = body->JointInternal.Type->size[1];
    emxEnsureCapacity_char_T(switch_expression, i3);
    jtilecol = body->JointInternal.Type->size[1] - 1;
    for (i3 = 0; i3 <= jtilecol; i3++) {
      switch_expression->data[i3] = body->JointInternal.Type->data[i3];
    }

    if (d_strcmp(switch_expression)) {
      ntilecols = 0;
    } else if (b_strcmp(switch_expression)) {
      ntilecols = 1;
    } else {
      ntilecols = -1;
    }

    switch (ntilecols) {
     case 0:
      for (i1 = 0; i1 < 16; i1++) {
        b_b[i1] = 0.0;
      }

      for (ntilecols = 0; ntilecols < 4; ntilecols++) {
        b_b[ntilecols + (ntilecols << 2)] = 1.0;
      }
      break;

     case 1:
      c_st.site = &ub_emlrtRSI;
      if (b_strcmp(body->JointInternal.Type) || c_strcmp
          (body->JointInternal.Type)) {
        for (i3 = 0; i3 < 3; i3++) {
          v[i3] = body->JointInternal.JointAxisInternal[i3];
        }
      } else {
        for (i3 = 0; i3 < 3; i3++) {
          v[i3] = rtNaN;
        }
      }

      if (((i2 - i1) + 1 == 1) || ((i2 - i1) + 1 == 0)) {
      } else {
        for (i3 = 0; i3 < 39; i3++) {
          e_u[i3] = h_u[i3];
        }

        g_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 39, m, &e_u[0]);
        emlrtAssign(&g_y, m);
        for (i3 = 0; i3 < 39; i3++) {
          e_u[i3] = h_u[i3];
        }

        j_y = NULL;
        m = emlrtCreateCharArray(2, &iv8[0]);
        emlrtInitCharArrayR2013a(&b_st, 39, m, &e_u[0]);
        emlrtAssign(&j_y, m);
        c_st.site = &qc_emlrtRSI;
        error(&c_st, g_y, getString(&c_st, b_message(&c_st, j_y, &j_emlrtMCI),
               &j_emlrtMCI), &j_emlrtMCI);
      }

      if ((i2 - i1) + 1 != 0) {
        ntilecols = 1;
      } else {
        ntilecols = 0;
      }

      jtilecol = i2 - i1;
      for (i2 = 0; i2 <= jtilecol; i2++) {
        qvec_data[i2] = qvec[i1 + i2];
      }

      v_size[0] = 1;
      v_size[1] = ntilecols + 3;
      for (i1 = 0; i1 < 3; i1++) {
        v_data[i1] = v[i1];
      }

      if (0 <= ntilecols - 1) {
        memcpy(&v_data[3], &qvec_data[0], (uint32_T)(ntilecols * (int32_T)sizeof
                (real_T)));
      }

      c_st.site = &vb_emlrtRSI;
      axang2tform(&c_st, v_data, v_size, b_b);
      break;

     default:
      c_st.site = &wb_emlrtRSI;
      if (b_strcmp(body->JointInternal.Type) || c_strcmp
          (body->JointInternal.Type)) {
        for (i3 = 0; i3 < 3; i3++) {
          v[i3] = body->JointInternal.JointAxisInternal[i3];
        }
      } else {
        for (i3 = 0; i3 < 3; i3++) {
          v[i3] = rtNaN;
        }
      }

      c_st.site = &xb_emlrtRSI;
      if (1 != (i2 - i1) + 1) {
        if ((i2 - i1) + 1 == 1) {
          for (i2 = 0; i2 < 45; i2++) {
            g_u[i2] = j_u[i2];
          }

          i_y = NULL;
          m = emlrtCreateCharArray(2, &iv7[0]);
          emlrtInitCharArrayR2013a(&c_st, 45, m, &g_u[0]);
          emlrtAssign(&i_y, m);
          for (i2 = 0; i2 < 45; i2++) {
            g_u[i2] = j_u[i2];
          }

          l_y = NULL;
          m = emlrtCreateCharArray(2, &iv11[0]);
          emlrtInitCharArrayR2013a(&c_st, 45, m, &g_u[0]);
          emlrtAssign(&l_y, m);
          d_st.site = &rc_emlrtRSI;
          error(&d_st, i_y, getString(&d_st, b_message(&d_st, l_y, &m_emlrtMCI),
                 &m_emlrtMCI), &m_emlrtMCI);
        } else {
          for (i2 = 0; i2 < 15; i2++) {
            f_u[i2] = i_u[i2];
          }

          h_y = NULL;
          m = emlrtCreateCharArray(2, &iv6[0]);
          emlrtInitCharArrayR2013a(&c_st, 15, m, &f_u[0]);
          emlrtAssign(&h_y, m);
          for (i2 = 0; i2 < 15; i2++) {
            f_u[i2] = i_u[i2];
          }

          k_y = NULL;
          m = emlrtCreateCharArray(2, &iv10[0]);
          emlrtInitCharArrayR2013a(&c_st, 15, m, &f_u[0]);
          emlrtAssign(&k_y, m);
          d_st.site = &sc_emlrtRSI;
          error(&d_st, h_y, getString(&d_st, b_message(&d_st, k_y, &l_emlrtMCI),
                 &l_emlrtMCI), &l_emlrtMCI);
        }
      }

      for (i2 = 0; i2 < 9; i2++) {
        b_I[i2] = 0;
      }

      for (ntilecols = 0; ntilecols < 3; ntilecols++) {
        b_I[ntilecols + 3 * ntilecols] = 1;
      }

      for (i2 = 0; i2 < 3; i2++) {
        for (i3 = 0; i3 < 3; i3++) {
          b_b[i3 + (i2 << 2)] = (real_T)b_I[i3 + 3 * i2];
        }

        b_b[i2 + 12] = v[i2] * qvec[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        b_b[(i1 << 2) + 3] = (real_T)iv9[i1];
      }
      break;
    }

    for (i1 = 0; i1 < 16; i1++) {
      c_b[i1] = body->JointInternal.ChildToJointTransform[i1];
    }

    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        c_a[i1 + (i2 << 2)] = 0.0;
        for (i3 = 0; i3 < 4; i3++) {
          c_a[i1 + (i2 << 2)] += b_a[i1 + (i3 << 2)] * b_b[i3 + (i2 << 2)];
        }
      }
    }

    ntilecols = Ttree->size[1] - 1;
    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        Ttree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, ntilecols, &p_emlrtBCI,
          &st)].f1[i1 + (i2 << 2)] = 0.0;
        for (i3 = 0; i3 < 4; i3++) {
          Ttree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, ntilecols,
            &p_emlrtBCI, &st)].f1[i1 + (i2 << 2)] = Ttree->
            data[emlrtDynamicBoundsCheckR2012b(b_i, 0, ntilecols, &p_emlrtBCI,
            &st)].f1[i1 + (i2 << 2)] + c_a[i1 + (i3 << 2)] * c_b[i3 + (i2 << 2)];
        }
      }
    }

    k += pnum;
    if (body->ParentIndex > 0.0) {
      for (i1 = 0; i1 < 16; i1++) {
        i2 = Ttree->size[1] - 1;
        i3 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &m_emlrtDCI, sp)
          - 1;
        b_a[i1] = Ttree->data[emlrtDynamicBoundsCheckR2012b(i3, 0, i2,
          &r_emlrtBCI, sp)].f1[i1];
      }

      i1 = Ttree->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &l_emlrtBCI, sp);
      ntilecols = Ttree->size[1] - 1;
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          c_a[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            c_a[i1 + (i2 << 2)] += b_a[i1 + (i3 << 2)] * Ttree->data[b_i].f1[i3
              + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 16; i1++) {
        Ttree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, ntilecols, &q_emlrtBCI,
          sp)].f1[i1] = c_a[i1];
      }
    }
  }

  emxFree_char_T(&switch_expression);
}

static boolean_T d_strcmp(emxArray_char_T *b_a)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_a->size[1] == 5) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (b_a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void axang2tform(const emlrtStack *sp, real_T axang_data[], int32_T
  axang_size[2], real_T H[16])
{
  static const int32_T iv[2] = { 1, 34 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 30 };

  static const int32_T iv3[2] = { 1, 5 };

  static const int32_T iv4[2] = { 1, 30 };

  static const int32_T iv5[2] = { 1, 4 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T b_u[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 'r', 'o', 't', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T h_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static char_T j_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T R[9];
  real_T tempR[9];
  real_T v[3];
  real_T cth;
  real_T theta;
  int32_T b_k;
  int32_T k;
  char_T c_u[48];
  char_T u[34];
  char_T d_u[30];
  char_T g_u[5];
  char_T i_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &cc_emlrtRSI;
  d_st.site = &pb_emlrtRSI;
  if (axang_size[1] != 4) {
    for (k = 0; k < 34; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&d_st, 34, m, &u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 48; k++) {
      c_u[k] = e_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&d_st, 48, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 5; k++) {
      g_u[k] = h_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&d_st, 5, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateDoubleScalar(4.0);
    emlrtAssign(&f_y, m);
    e_st.site = &pc_emlrtRSI;
    error(&e_st, y, getString(&e_st, c_message(&e_st, b_y, d_y, f_y, &k_emlrtMCI),
           &k_emlrtMCI), &k_emlrtMCI);
  }

  b_st.site = &bc_emlrtRSI;
  for (k = 0; k < 3; k++) {
    theta = axang_data[k];
    v[k] = theta * theta;
  }

  theta = v[0];
  for (k = 0; k < 2; k++) {
    theta += v[k + 1];
  }

  c_st.site = &dc_emlrtRSI;
  if (theta < 0.0) {
    for (k = 0; k < 30; k++) {
      d_u[k] = f_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 30, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 30; k++) {
      d_u[k] = f_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 30, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 4; k++) {
      i_u[k] = j_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 4, m, &i_u[0]);
    emlrtAssign(&g_y, m);
    d_st.site = &nc_emlrtRSI;
    error(&d_st, c_y, getString(&d_st, message(&d_st, e_y, g_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  theta = 1.0 / muDoubleScalarSqrt(theta);
  for (k = 0; k < 3; k++) {
    v[k] = axang_data[k] * theta;
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, axang_size[1], &s_emlrtBCI, &st);
  theta = axang_data[3];
  cth = muDoubleScalarCos(theta);
  theta = muDoubleScalarSin(theta);
  R[0] = v[0] * v[0] * (1.0 - cth) + cth;
  R[1] = v[1] * v[0] * (1.0 - cth) - v[2] * theta;
  R[2] = v[2] * v[0] * (1.0 - cth) + v[1] * theta;
  R[3] = v[0] * v[1] * (1.0 - cth) + v[2] * theta;
  R[4] = v[1] * v[1] * (1.0 - cth) + cth;
  R[5] = v[2] * v[1] * (1.0 - cth) - v[0] * theta;
  R[6] = v[0] * v[2] * (1.0 - cth) - v[1] * theta;
  R[7] = v[1] * v[2] * (1.0 - cth) + v[0] * theta;
  R[8] = v[2] * v[2] * (1.0 - cth) + cth;
  memcpy(&tempR[0], &R[0], 9U * sizeof(real_T));
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      R[k + 3 * b_k] = tempR[b_k + 3 * k];
    }
  }

  for (k = 0; k < 16; k++) {
    H[k] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      H[b_k + (k << 2)] = R[b_k + 3 * k];
    }
  }

  H[15] = 1.0;
}

static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody_1 *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T d_u[5] = { 'J', 'o', 'i', 'n', 't' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->Index == 0.0) {
    st.site = &ic_emlrtRSI;
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &mc_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &n_emlrtMCI),
           &n_emlrtMCI), &n_emlrtMCI);
  }

  return &obj->JointInternal;
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static const mxArray *message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = c;
  pArrays[1] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "message", true, location);
}

static void RigidBodyTree_validateConfiguration(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T Q[6])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T b_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T e_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T l_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T d_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T j_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T n_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T h_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T i_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T sz[2];
  int32_T i;
  int32_T k;
  char_T u[52];
  char_T k_u[51];
  char_T c_u[46];
  char_T m_u[45];
  char_T f_u[38];
  char_T g_u[25];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  st.site = &ob_emlrtRSI;
  b_st.site = &pb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 52, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      g_u[i] = i_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &g_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &lc_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, e_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  b_st.site = &pb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 52, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      c_u[i] = j_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &c_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      g_u[i] = i_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &g_u[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &kc_emlrtRSI;
    error(&c_st, c_y, getString(&c_st, message(&c_st, f_y, i_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  b_st.site = &pb_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p && ((sz[k] != sz[k]) || ((!muDoubleScalarIsInf(sz[k])) && (sz[k] >=
           0.0) && (sz[k] == muDoubleScalarFloor(sz[k]))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      f_u[i] = h_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &f_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      f_u[i] = h_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &f_u[0]);
    emlrtAssign(&h_y, m);
    c_st.site = &oc_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, b_message(&c_st, h_y, &e_emlrtMCI),
           &e_emlrtMCI), &e_emlrtMCI);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      if (sz[k] != sz[k]) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          i = 6;
        } else {
          i = 1;
        }

        if (sz[k] == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      k_u[i] = l_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 51, m, &k_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      m_u[i] = n_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&b_st, 45, m, &m_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      g_u[i] = i_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &g_u[0]);
    emlrtAssign(&k_y, m);
    c_st.site = &jc_emlrtRSI;
    error(&c_st, g_y, getString(&c_st, message(&c_st, j_y, k_y, &f_emlrtMCI),
           &f_emlrtMCI), &f_emlrtMCI);
  }
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetJacobianBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
  c_emxInitStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_unnamed_struct(&pStruct->CollisionGeometries, 2);
}

static void emxInit_unnamed_struct(emxArray_unnamed_struct **pEmxArray, int32_T
  numDimensions)
{
  emxArray_unnamed_struct *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_unnamed_struct *)emlrtMallocMex(sizeof
    (emxArray_unnamed_struct));
  emxArray = *pEmxArray;
  emxArray->data = (b_robotics_manip_internal_CollisionGeometry **)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody_1
  pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    d_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct)
{
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
  c_emxInitStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxFree_unnamed_struct(emxArray_unnamed_struct **pEmxArray)
{
  if (*pEmxArray != (emxArray_unnamed_struct *)NULL) {
    if (((*pEmxArray)->data != (b_robotics_manip_internal_CollisionGeometry **)
         NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_unnamed_struct *)NULL;
  }
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_unnamed_struct(&pStruct->CollisionGeometries);
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody_1
  pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    d_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct)
{
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetJacobianBlock *pStruct)
{
  c_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_unnamed_struc(emxArray_unnamed_struct *emxArray,
  int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof
      (b_robotics_manip_internal_CollisionGeometry *));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof
             (b_robotics_manip_internal_CollisionGeometry *) * (uint32_T)
             oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
      }
    }

    emxArray->data = (b_robotics_manip_internal_CollisionGeometry **)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions)
{
  emxArray_cell_wrap *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap *)emlrtMallocMex(sizeof(emxArray_cell_wrap));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray)
{
  if (*pEmxArray != (emxArray_cell_wrap *)NULL) {
    if (((*pEmxArray)->data != (cell_wrap *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap *)NULL;
  }
}

static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(cell_wrap));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (cell_wrap *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void init_simulink_io_address(InstanceStruct_fDGNuntfny3gwrKhJ5RePH
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y0 = (real_T (*)[36])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_fDGNuntfny3gwrKhJ5RePH(SimStruct *S, int_T tid)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_fDGNuntfny3gwrKhJ5RePH(SimStruct *S)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_fDGNuntfny3gwrKhJ5RePH(SimStruct *S, int_T tid)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_fDGNuntfny3gwrKhJ5RePH(SimStruct *S)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_fDGNuntfny3gwrKhJ5RePH(SimStruct *S)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_fDGNuntfny3gwrKhJ5RePH(SimStruct *S)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_fDGNuntfny3gwrKhJ5RePH(SimStruct *S)
{
  InstanceStruct_fDGNuntfny3gwrKhJ5RePH *moduleInstance =
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH *)calloc(1, sizeof
    (InstanceStruct_fDGNuntfny3gwrKhJ5RePH));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_fDGNuntfny3gwrKhJ5RePH);
  ssSetmdlInitializeConditions(S, mdlInitialize_fDGNuntfny3gwrKhJ5RePH);
  ssSetmdlUpdate(S, mdlUpdate_fDGNuntfny3gwrKhJ5RePH);
  ssSetmdlTerminate(S, mdlTerminate_fDGNuntfny3gwrKhJ5RePH);
  ssSetmdlEnable(S, mdlEnable_fDGNuntfny3gwrKhJ5RePH);
  ssSetmdlDisable(S, mdlDisable_fDGNuntfny3gwrKhJ5RePH);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_fDGNuntfny3gwrKhJ5RePH(SimStruct *S)
{
}

void method_dispatcher_fDGNuntfny3gwrKhJ5RePH(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_fDGNuntfny3gwrKhJ5RePH(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_fDGNuntfny3gwrKhJ5RePH(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: fDGNuntfny3gwrKhJ5RePH.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_fDGNuntfny3gwrKhJ5RePH_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,3);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("blas.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,2,elem_8);
  mxSetCell(elem_3,1,elem_5);
  elem_9 = mxCreateCellMatrix(1,3);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  elem_11 = mxCreateString("");
  mxSetCell(elem_9,1,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_9,2,elem_12);
  mxSetCell(elem_3,2,elem_9);
  elem_13 = mxCreateCellMatrix(1,3);
  elem_14 = mxCreateString("");
  mxSetCell(elem_13,0,elem_14);
  elem_15 = mxCreateString("");
  mxSetCell(elem_13,1,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_13,2,elem_16);
  mxSetCell(elem_3,3,elem_13);
  mxSetCell(elem_1,1,elem_3);
  elem_17 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_17);
  elem_18 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_18);
  elem_19 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_19);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_20);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_21 = mxCreateCellMatrix(1,2);
  elem_22 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_21,0,elem_22);
  elem_23 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_21,1,elem_23);
  mxSetCell(mxBIArgs,1,elem_21);
  elem_24 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_24);
  return mxBIArgs;
}

mxArray *cgxe_fDGNuntfny3gwrKhJ5RePH_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
