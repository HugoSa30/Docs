/*
 * Program: n42.bin
 * Function: FUN_000d9f34
 * Entry: 000d9f34
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9f34(void)

{
  float fVar1;
  double dVar2;
  undefined auStack_98 [60];
  word local_5c;
  ushort local_5a;
  ushort local_58;
  ushort local_56;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  uint uStack_3c;
  
  if ((((DAT_001c7fb9 == '\0') || (B_stend == '\0')) || (B_ll != '\0')) ||
     ((tmot <= DAT_001c7fba || (B_kr == '\0')))) {
    DAT_003fc25d = 0;
  }
  else {
    local_5c = nmot_w;
    if (B_krldy == '\0') {
      local_5a = _rl_w;
    }
    else {
      local_5a = (ushort)rlsolkrvf << 5;
    }
    local_58 = (ushort)tans;
    local_56 = (ushort)tmot;
    FUN_000d9d44(DAT_001d14a5,DAT_001d14a4,&DAT_003fb118,&DAT_003fb128,auStack_98,&local_5c);
    dVar2 = (double)_DAT_0001cb4c;
    local_54 = (float)((double)CONCAT44(0x43300000,(uint)nmot_w) - dVar2) * _DAT_0001cb50;
    if (B_krldy == '\0') {
      local_50 = (float)((double)CONCAT44(0x43300000,(uint)_rl_w) - dVar2) * _DAT_0001cb58;
    }
    else {
      local_50 = (float)((double)CONCAT44(0x43300000,(uint)rlsolkrvf) - dVar2) * _DAT_0001cb54;
    }
    local_4c = (float)((double)(float)((double)CONCAT44(0x43300000,(uint)tans) - dVar2) *
                       _DAT_0001cb60 - _DAT_0001cb68);
    local_40 = 0x43300000;
    uStack_3c = (uint)tmot;
    local_48 = (float)((double)(float)((double)CONCAT44(0x43300000,uStack_3c) - dVar2) *
                       _DAT_0001cb60 - _DAT_0001cb68);
    dVar2 = (double)FUN_000d9ca8(DAT_001d14a5,DAT_001d14a4,&DAT_003fb138,auStack_98,&local_54);
    fVar1 = (float)(dVar2 * (double)_DAT_0001cb70);
    if (fVar1 <= _DAT_0001cb74) {
      if (_DAT_0001cb40 <= fVar1) {
        DAT_003fc25f = (byte)(int)(dVar2 * (double)_DAT_0001cb70);
      }
      else {
        DAT_003fc25f = 0;
      }
    }
    else {
      DAT_003fc25f = 0xff;
    }
    if (DAT_005b912e < DAT_003fc25f) {
      DAT_003fc25d = DAT_005b912e;
    }
    else {
      DAT_003fc25d = DAT_003fc25f;
    }
  }
  return;
}

