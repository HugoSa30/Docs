/*
 * Program: n42.bin
 * Function: FUN_001e2f2c
 * Entry: 001e2f2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e2f2c(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int in_TBLr;
  undefined2 local_c8;
  byte local_c6;
  ushort local_c5;
  byte local_c3;
  undefined2 local_c2;
  byte local_c0;
  ushort local_bf;
  byte local_bd;
  undefined2 local_bc;
  byte local_ba;
  ushort local_b9;
  byte local_b7;
  undefined2 local_b6;
  byte local_b4;
  ushort local_b3;
  byte local_b1;
  undefined2 local_b0;
  byte local_ae;
  undefined2 local_ad;
  byte local_ab;
  undefined2 local_aa;
  byte local_a8;
  undefined2 local_a7;
  byte local_a5;
  undefined auStack_68 [2];
  ushort local_66;
  ushort local_62;
  ushort local_5e;
  byte local_28;
  byte local_27;
  byte local_26 [2];
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  FUN_001e2e0c();
  FUN_001e2eec();
  cVar1 = FUN_001e7724(DAT_00fe16e0,local_26,0);
  if (cVar1 != '\x01') goto LAB_001e38e8;
  iVar2 = (uint)local_26[0] * 0xf;
  local_27 = *(byte *)(iVar2 + 0xfe16e5) & 0xf;
  local_28 = local_27 | 0x80;
  local_27 = local_27 | 0x20;
  cVar1 = *param_2;
  if (*param_1 != cVar1) {
    if (cVar1 == '\x01') {
      local_c8 = 0x2e;
      local_c5 = 0;
      local_c2 = 0xf2;
      local_bf = 0;
      local_c6 = local_28;
      local_c3 = local_27;
      local_c0 = local_28;
      local_bd = local_27;
      FUN_001e7524(iVar2 + 0xfe16e6);
      FUN_001e75cc(&local_c8,4,auStack_68,1);
      DAT_003fb8bd = (byte)local_62 & 0xf;
      DAT_003fb8be = (byte)((int)(uint)local_62 >> 4) & 7;
      _DAT_003fb8b9 = _DAT_00fe182c * (local_66 & 0x3f);
      DAT_003fb8c0 = '\0';
    }
    else if (DAT_003fb8bf != 0) {
      local_c8 = 0x18;
      if (DAT_003fb8bf < 8) {
        local_c5 = 1;
      }
      else {
        local_c5 = 0x3f;
        DAT_003fb8bf = 7;
      }
      local_c6 = local_28;
      local_c3 = local_27;
      FUN_001e7524(iVar2 + 0xfe16e6);
      for (; DAT_003fb8bf != 0; DAT_003fb8bf = DAT_003fb8bf - 1) {
                    /* WARNING: Read-only address (ram,0x00305152) is written */
                    /* WARNING: Read-only address (ram,0x00305156) is written */
        FUN_001e75cc(&local_c8,2,auStack_68,1);
      }
                    /* WARNING: Read-only address (ram,0x00305152) is written */
                    /* WARNING: Read-only address (ram,0x00305156) is written */
      local_c8 = 0xf2;
      local_c5 = 0;
      local_c6 = local_28;
      local_c3 = local_28;
      FUN_001e75cc(&local_c8,2,auStack_68,1);
      DAT_003fb8bd = (byte)local_66 & 0xf;
      DAT_003fb8be = (byte)((int)(uint)local_66 >> 4) & 7;
      _DAT_003fb8b9 = _DAT_00fe182c;
      _DAT_003fb8b5 = in_TBLr;
    }
    *param_1 = *param_2;
    goto LAB_001e38e8;
  }
  if (cVar1 != '\x01') {
    if (DAT_003fb8bf != 0) {
      local_c8 = 0x18;
      if (DAT_003fb8bf < 8) {
        local_c5 = 1;
      }
      else {
        local_c5 = 0x3f;
      }
      local_c2 = 0x2e;
      local_bf = 0;
      local_bc = 0xf2;
      local_b9 = 0;
      _DAT_003fb8b5 = in_TBLr;
      local_c6 = local_28;
      local_c3 = local_27;
      local_c0 = local_28;
      local_bd = local_27;
      local_ba = local_28;
      local_b7 = local_27;
      FUN_001e7524((uint)local_26[0] * 0xf + 0xfe16e6);
      FUN_001e75cc(&local_c8,6,auStack_68,1);
      DAT_003fb8bd = (byte)local_5e & 0xf;
      DAT_003fb8be = (byte)((int)(uint)local_5e >> 4) & 7;
      _DAT_003fb8b9 = _DAT_00fe182c * (local_62 & 0x3f);
      DAT_003fb8bf = 0;
    }
    goto LAB_001e38e8;
  }
  if ((-1 < (char)DAT_0030501f) && (DAT_003fb8c0 != '\0')) goto LAB_001e38e8;
  if (DAT_003fb8c0 == '\0') {
    if ((uint)(_DAT_00fe1830 + _DAT_003fb8b9) < (uint)(in_TBLr - _DAT_003fb8b5)) {
      _DAT_003fb8b5 =
           _DAT_003fb8b5 +
           (_DAT_00fe1830 + _DAT_003fb8b9) *
           ((uint)(in_TBLr - _DAT_003fb8b5) / (uint)(_DAT_00fe1830 + _DAT_003fb8b9));
    }
    if (((uint)(in_TBLr - _DAT_003fb8b5) <= (uint)(_DAT_00fe1834 + _DAT_003fb8b9)) ||
       ((uint)(_DAT_00fe1838 + _DAT_003fb8b9) <= (uint)(in_TBLr - _DAT_003fb8b5)))
    goto LAB_001e38e8;
    local_c8 = 6;
    local_c5 = 0;
    local_c6 = local_28;
    local_c3 = local_27;
    FUN_001e7524((uint)local_26[0] * 0xf + 0xfe16e6);
    FUN_001e75cc(&local_c8,2,auStack_68,0);
    DAT_003fb8c0 = '\x01';
    do {
      if (param_3 == 0) goto LAB_001e38e8;
    } while (-1 < (char)DAT_0030501f);
LAB_001e32a0:
    DAT_0030501f = DAT_0030501f & 0x7f;
    local_21 = 0;
    local_22 = 0;
    local_23 = 0;
    local_24 = 0;
    _DAT_003fb8b5 = in_TBLr;
    if ((_DAT_00305142 & 0xff) == 0x40) {
      if ((DAT_003fb8bd & 1) == 0) {
        local_24 = 10;
        local_23 = 0x10;
        local_21 = 0x80;
      }
      else {
        local_24 = 0x15;
        local_22 = 0x80;
      }
      if ((DAT_003fb8bd & 2) == 0) {
        local_23 = local_23 | 0x2a;
        local_21 = local_21 | 0x40;
      }
      else {
        local_24 = local_24 | 0x20;
        local_23 = local_23 | 5;
        local_22 = local_22 | 0x40;
      }
      if ((DAT_003fb8bd & 4) == 0) {
        local_23 = local_23 | 0x40;
        local_22 = local_22 | 10;
        local_21 = local_21 | 0x20;
      }
      else {
        local_24 = local_24 | 0x40;
        local_22 = local_22 | 0x25;
      }
      if ((DAT_003fb8bd & 8) == 0) {
        local_23 = local_23 | 0x80;
        local_21 = local_21 | 0x1a;
      }
      else {
        local_24 = local_24 | 0x80;
        local_22 = local_22 | 0x10;
        local_21 = local_21 | 5;
      }
      local_c8 = 0xdc;
      local_c5 = (ushort)local_21;
      local_c2 = 0xda;
      local_bf = (ushort)local_22;
      local_bc = 0xd6;
      local_b9 = (ushort)local_23;
      local_b6 = 0xd0;
    }
    else {
      if (DAT_003fb8bd < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x001e32ec */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fb8bd * 4 + 0xfe32f8))();
        return;
      }
      local_c8 = 0xe0;
      local_c5 = 0;
      local_c2 = 0xe0;
      local_bf = 0;
      local_bc = 0xe0;
      local_b9 = 0;
      local_b6 = 0xe0;
    }
    local_b3 = (ushort)local_24;
    local_b0 = 0xf2;
    local_ad = 0;
    local_aa = 0x2e;
    local_a7 = 0;
    local_a8 = local_28;
    local_ae = local_28;
    local_b4 = local_28;
    local_ba = local_28;
    local_c0 = local_28;
    local_c6 = local_28;
    local_a5 = local_27;
    local_ab = local_27;
    local_b1 = local_27;
    local_b7 = local_27;
    local_bd = local_27;
    local_c3 = local_27;
    FUN_001e7524((uint)local_26[0] * 0xf + 0xfe16e6);
    FUN_001e75cc(&local_c8,0xc,auStack_68,0);
    DAT_003fb8c0 = '\x02';
    do {
      if (param_3 == 0) goto LAB_001e38e8;
    } while (-1 < (char)DAT_0030501f);
  }
  else {
    if (DAT_003fb8c0 == '\x01') goto LAB_001e32a0;
    if (DAT_003fb8c0 != '\x02') goto LAB_001e38e8;
  }
  DAT_0030501f = DAT_0030501f & 0x7f;
  DAT_003fb8bd = (byte)_DAT_00305152 & 0xf;
  DAT_003fb8be = (byte)(_DAT_00305152 >> 4) & 7;
  if (DAT_003fb8bf == 0) {
    _DAT_003fb8b9 = _DAT_00fe182c * (_DAT_00305156 & 0x3f);
  }
  else {
    DAT_003fb8bf = DAT_003fb8bf - 1;
  }
  DAT_003fb8c0 = '\0';
LAB_001e38e8:
  FUN_001e2e0c();
  return;
}

