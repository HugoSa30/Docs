/*
 * Program: n42.bin
 * Function: FUN_0014b040
 * Entry: 0014b040
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014b040(void)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((B_llk != 0) && (DAT_001c25af != '\0')) {
    fVar1 = (float)(((double)CONCAT44(0x43300000,(uint)trefvvto) - (double)_DAT_0001c29c) *
                    (double)_DAT_0001c2a0 - (double)_DAT_0001c2a4);
    dVar5 = (double)fVar1;
    uVar2 = ((int)((_fkmsvvts_w - 0x4000) * (uint)mlsolkor_w) >> 0xe) + (short)msnvvtonn * 4;
    if ((int)uVar2 < 0x1fffd) {
      if ((int)uVar2 < -0x1fffc) {
        msnvvtonns = 0x8001;
      }
      else {
        msnvvtonns = (word)((int)uVar2 >> 2);
      }
    }
    else {
      msnvvtonns = 0x7fff;
    }
    dVar3 = (double)FUN_0014ade8((double)fVar1,(double)_DAT_001c28c0,3,&nn_w1,&nn_w2,&DAT_001c28a4,
                                 &DAT_001c28b0);
    _ausg_nn = (float)dVar3;
    dVar4 = (double)_DAT_0001c2a8;
    _errornn = (float)((double)(float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dVar4) *
                       _DAT_0001c2b0 - (double)(float)dVar3);
    if (B_timsvvt != 0) {
      FUN_0014aeb4((double)_DAT_001c28bc,(double)(float)dVar5,(double)_errornn,(double)_DAT_001c28c0
                   ,3,&nn_w1,&nn_w2,&DAT_001c28a4,&DAT_001c28b0);
      FUN_0014afb8((double)_DAT_001c28c8,(double)_DAT_001c28cc,(double)_DAT_001c28d0,
                   (double)_DAT_001c28d4,3,&nn_w1,&nn_w2);
    }
    fVar1 = (_errornn * _DAT_001c28c4 + _ausg_nn) * _DAT_0001c2b8;
    if ((float)((double)CONCAT44(0x43300000,(int)(short)DAT_001c25b4 ^ 0x80000000) - dVar4) <= fVar1
       ) {
      msnvvtonn = (word)(int)fVar1;
    }
    else {
      msnvvtonn = (word)DAT_001c25b4;
    }
  }
  return;
}

