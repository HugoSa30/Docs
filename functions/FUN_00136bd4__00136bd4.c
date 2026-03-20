/*
 * Program: n42.bin
 * Function: FUN_00136bd4
 * Entry: 00136bd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00136bd4(void)

{
  char cVar1;
  uint uVar2;
  undefined uVar3;
  byte bVar4;
  ushort local_40;
  undefined auStack_3c [3];
  byte local_39;
  byte local_37;
  ushort local_34 [2];
  ushort local_30 [2];
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  
  if (DAT_005b8544 == '\0') {
    if (((DAT_001c1804 == '\x01') ||
        (((((bfrlmn <= afrlmn && (afrlmx <= bfrlmx)) && (bfnmn <= afnmn)) && (afnmx <= bfnmx)) &&
         ((B_bfklt == B_afklt || (B_bfwrm == B_afwrm)))))) &&
       ((bbdcy == B_dcy && ((B_ivzabg1 == 0 && ((B_sp1 & 1) == 0)))))) {
      bVar4 = 0;
      local_40 = _B_mnmd & 0xd0fc | 0x2002;
      local_34[0] = local_40;
      local_2c = local_34;
      local_30[0] = local_40;
      func_0xff222958(0x83,local_30);
      do {
        if (bVar4 < 0xc) {
          uVar2 = (uint)*(byte *)(bVar4 + 0x1bd9c);
        }
        else {
          uVar2 = 0x84;
        }
        local_40 = *(ushort *)(&UNK_003fde62 + uVar2 * 2) & 0xd0fc | 0x2002;
        if (bVar4 < 0xc) {
          uVar3 = *(undefined *)(bVar4 + 0x1bda8);
        }
        else {
          uVar3 = 0x84;
        }
        local_34[0] = local_40;
        local_28[0] = local_40;
        local_24 = local_34;
        func_0xff222958(uVar3,local_28);
        bVar4 = bVar4 + 1;
      } while (bVar4 < 4);
      B_sp2 = B_sp2 & 0xfe | 1;
      FUN_00142f24(&B_sp2);
    }
    cVar1 = func_0xff250aac(0x83,auStack_3c);
    if (cVar1 == '\0') {
      DAT_003fa972 = '\x01';
    }
    else if (((local_39 & 1) == 0) && ((local_37 & 1) == 0)) {
      DAT_003fa972 = '\x01';
      bVar4 = 0;
      do {
        if (bVar4 < 0xc) {
          uVar3 = *(undefined *)(bVar4 + 0x1bdb4);
        }
        else {
          uVar3 = 0x84;
        }
        cVar1 = func_0xff250aac(uVar3,auStack_3c);
        if ((cVar1 != '\0') && (((local_39 & 1) != 0 || ((local_37 & 1) != 0)))) {
          DAT_003fa972 = '\0';
        }
        bVar4 = bVar4 + 1;
      } while (bVar4 < 4);
    }
    else {
      DAT_003fa972 = '\0';
    }
    if (DAT_003fa972 != '\0') {
      afnmn = 0xff;
      afnmx = 0;
      afrlmn = 0xff;
      afrlmx = 0;
      B_afklt = 0;
      B_afwrm = 0;
    }
    B_sp1 = B_sp1 & 0xfe;
    DAT_005b8544 = '\x01';
  }
  return;
}

