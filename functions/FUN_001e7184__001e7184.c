/*
 * Program: n42.bin
 * Function: FUN_001e7184
 * Entry: 001e7184
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e7184(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint unaff_r29;
  uint uVar6;
  int iVar7;
  uint in_TBLr;
  undefined uStack_a9;
  undefined local_a8 [128];
  int local_28;
  int local_24 [3];
  
  cVar2 = DAT_003fb9c2;
  if (_DAT_003fb958 < in_TBLr) {
    uVar6 = in_TBLr - _DAT_003fb958;
  }
  else {
    uVar6 = _DAT_003fb958 - ((in_TBLr == 0) + 1);
  }
  if ((uVar6 < _DAT_00fe1824) && (DAT_003fb954 != '\0')) {
    DAT_003fb9ac = DAT_003fb9ac & 0xf7;
    dr_errId = '\0';
    FUN_001e1ccc(0x37);
  }
  else if (DAT_003fb9ae == '\0') {
    DAT_003fb9ac = DAT_003fb9ac & 0xf7;
    dr_errId = '\0';
    FUN_001e1ccc(0x10);
  }
  else if (DAT_003fb9c2 == -5) {
    if ((DAT_003fb9ac >> 3 & 1) == 1) {
      DAT_003fbad6 = DAT_003fb9c2;
      puVar5 = &DAT_003fb8d8;
      DAT_003fb8d8 = 0;
      puVar4 = &DAT_003fbad7;
      DAT_003fbad7 = 0;
      iVar7 = 0x3a;
      do {
        puVar5[1] = 0;
        puVar4[1] = 0;
        puVar5 = puVar5 + 2;
        *puVar5 = 0;
        puVar4 = puVar4 + 2;
        *puVar4 = 0;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      DAT_003fbac2 = 0x76;
    }
    else {
      dr_errId = '\x01';
      DAT_003fbad6 = DAT_003fb9c2;
      uVar6 = 0;
      do {
        FUN_001e6ff4(_DAT_003fbad2 & 0xff);
        uVar3 = (uint)_dr_errType;
        do {
          do {
            uVar3 = uVar3 * 0xe89 + 1;
            uVar1 = uVar3 & 0xffff;
          } while (uVar1 == (unaff_r29 & 0xffff));
        } while ((uVar3 & 0xff00) == 0);
        _dr_errType = (ushort)uVar3;
        if ((uVar6 & 1) == 0) {
          (&DAT_003fb8d8)[uVar6] = (char)uVar1;
        }
        else {
          (&DAT_003fb8d8)[uVar6] = (char)(uVar1 >> 8);
        }
        uVar6 = uVar6 + 1;
        unaff_r29 = uVar1;
      } while (uVar6 < 0x75);
      puVar5 = &DAT_003fb8d8;
      puVar4 = &DAT_003fbad7;
      DAT_003fbad7 = DAT_003fb8d8;
      iVar7 = 0x3a;
      do {
        puVar4[1] = puVar5[1];
        puVar5 = puVar5 + 2;
        puVar4 = puVar4 + 2;
        *puVar4 = *puVar5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      DAT_003fbac2 = 0x76;
    }
  }
  else if (DAT_003fb9c2 == -4) {
    if (DAT_003fb9ae == -0x7f) {
      if (dr_errId == '\0') {
        DAT_003fb9ac = DAT_003fb9ac & 0xf7;
        dr_errId = '\0';
        FUN_001e1ccc(0x10);
      }
      else {
        dr_errId = '\0';
        puVar4 = &uStack_a9;
        puVar5 = &DAT_003fb9c2;
        iVar7 = 0x40;
        do {
          puVar4[1] = puVar5[1];
          puVar5 = puVar5 + 2;
          puVar4 = puVar4 + 2;
          *puVar4 = *puVar5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_28 = 0;
        local_24[0] = -0x61af3c8f;
        FUN_001e6f0c(local_a8,&DAT_003fb8d8,&local_28,local_24);
        if ((local_28 == 10) && (local_24[0] == 0x61af3c8e)) {
          DAT_003fb9ac = DAT_003fb9ac | 8;
          DAT_003fbac2 = 2;
          DAT_003fbad6 = cVar2;
          DAT_003fbad7 = 0x34;
        }
        else {
          DAT_003fb954 = '\x01';
          DAT_003fb9ac = DAT_003fb9ac & 0xf7;
          _DAT_003fb958 = in_TBLr;
          FUN_001e1ccc(0x33);
        }
      }
    }
    else {
      DAT_003fb9ac = DAT_003fb9ac & 0xf7;
      dr_errId = '\0';
      FUN_001e1ccc(0x10);
    }
  }
  else {
    DAT_003fb9ac = DAT_003fb9ac & 0xf7;
    dr_errId = '\0';
    FUN_001e1ccc(0x11);
  }
  return;
}

