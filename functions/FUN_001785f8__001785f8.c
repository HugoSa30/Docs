/*
 * Program: n42.bin
 * Function: FUN_001785f8
 * Entry: 001785f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001785f8(void)

{
  double dVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_MSR;
  double dVar9;
  double dVar10;
  undefined auStack_a0 [60];
  word local_64;
  ushort local_62;
  ushort local_60;
  ushort local_5e;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  uint uStack_44;
  
  uVar5 = _DAT_003fb14c;
  fVar2 = _DAT_0001cb40;
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  uVar6 = (uint)_DAT_003fb14c;
  uVar7 = (uint)DAT_003fb14e;
  _DAT_003fb14c = 0;
  DAT_003fb14e = 0;
  if ((DAT_003fc18c != '\0') || ((CWZWDYN & 8) != 0)) {
    uVar8 = 0;
    do {
      iVar3 = uVar8 * 4;
      *(float *)(&DAT_003fdc7c + iVar3) = fVar2;
      *(float *)(&DAT_003fdcb8 + iVar3) = fVar2;
      *(float *)(&DAT_003fdcf4 + iVar3) = fVar2;
      *(float *)(&DAT_003fdd30 + iVar3) = fVar2;
      *(float *)(&DAT_003fdd6c + iVar3) = fVar2;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 0xf);
    DAT_003fc18c = '\0';
  }
  bVar4 = false;
  uVar8 = 0;
  do {
    if ((&UNK_003fc268)[uVar8] == DAT_005b912e) {
      bVar4 = true;
    }
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 4);
  if ((B_stend != '\0') && (DAT_003fb150 == '\0')) {
    DAT_003fb151 = '\x01';
  }
  if ((DAT_003fb14f != '\0') && (DAT_003fb151 != '\0')) {
    DAT_003fb14f = DAT_003fb14f + -1;
    DAT_003fb150 = B_stend;
  }
  if (((((B_krndy == '\0') && (B_krldy == '\0')) && (DAT_003fb14f == '\0')) &&
      ((DAT_001c7fba < tmot && (B_kr != '\0')))) &&
     ((B_krdws == '\0' && ((B_zwkraa != '\0' && (DAT_001c816c < nmot)))))) {
    local_64 = nmot_w;
    local_62 = _rl_w;
    local_60 = (ushort)tans;
    local_5e = (ushort)tmot;
    func_0xff249d44(DAT_001d14a5,DAT_001d14a4,&DAT_003fb118,&DAT_003fb128,auStack_a0,&local_64);
    dVar10 = (double)_DAT_0001cb4c;
    local_5c = (float)((double)CONCAT44(0x43300000,(uint)nmot_w) - dVar10) * _DAT_0001cb50;
    local_58 = (float)((double)CONCAT44(0x43300000,(uint)_rl_w) - dVar10) * _DAT_0001cb58;
    local_54 = (float)((double)(float)((double)CONCAT44(0x43300000,(uint)tans) - dVar10) *
                       _DAT_0001cb60 - _DAT_0001cb68);
    local_48 = 0x43300000;
    uStack_44 = (uint)tmot;
    local_50 = (float)((double)(float)((double)CONCAT44(0x43300000,uStack_44) - dVar10) *
                       _DAT_0001cb60 - _DAT_0001cb68);
    dVar9 = (double)func_0xff249ca8(DAT_001d14a5,DAT_001d14a4,&DAT_003fb138,auStack_a0,&local_5c);
    if (DAT_001c7fb9 == '\0') {
      dVar1 = dVar9 * (double)_DAT_0001cb70;
      fVar2 = (float)dVar1;
      dVar9 = (double)fVar2;
      if (fVar2 <= _DAT_0001cb74) {
        if (_DAT_0001cb40 <= fVar2) {
          DAT_003fc25f = (undefined)(int)dVar1;
        }
        else {
          DAT_003fc25f = 0;
        }
      }
      else {
        DAT_003fc25f = 0xff;
      }
    }
    if (uVar7 == 0) {
      DAT_003fc260 = (char)uVar5;
    }
    else {
      DAT_003fc260 = (char)(uVar6 / uVar7);
    }
    if (DAT_001c7fb8 < (byte)(DAT_003fc260 + DAT_003fc25d)) {
      DAT_003fc261 = (DAT_003fc260 + DAT_003fc25d) - DAT_001c7fb8;
    }
    else {
      DAT_003fc261 = 0;
    }
    local_48 = 0x43300000;
    uStack_44 = (uint)DAT_003fc261;
    _DAT_003fb114 =
         (float)((double)CONCAT44(0x43300000,uStack_44) - dVar10) * _DAT_0001cb78 - (float)dVar9;
    if (!bVar4) {
      if (_DAT_003fb114 <= _DAT_0001cb40) {
        func_0xff218740((double)_nmot_f,&DAT_001c7f80);
        return;
      }
      func_0xff218740((double)_nmot_f,&DAT_001c7f4c);
      return;
    }
  }
  return;
}

