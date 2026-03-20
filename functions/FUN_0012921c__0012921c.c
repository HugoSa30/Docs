/*
 * Program: n42.bin
 * Function: FUN_0012921c
 * Entry: 0012921c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00129458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012921c(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  FUN_00129080();
  if (param_1 == 0x12) {
    e_ram_um = '\0';
    ram_ur = -0x67;
    e_romx_um = 0;
    romx_ur = 0x99;
    e_rom1_um = 0;
    rom1_ur = 0x99;
    e_mem_um = '\0';
    mem_ur = -0x67;
    rompage_um = 0xff;
    rompage_ur = 0;
    goto LAB_00129358;
  }
  if (e_mem_um == '\0') {
    if (mem_ur != -0x67) goto LAB_001292d8;
  }
  else if (mem_ur != 'f') {
LAB_001292d8:
    e_mem_um = '\x01';
    mem_ur = 'f';
    FUN_00110cc4(0x132);
    FUN_00110efc(0x132);
  }
  if (e_ram_um == '\0') {
    if (ram_ur == -0x67) goto LAB_00129358;
  }
  else if (ram_ur == 'f') goto LAB_00129358;
  e_ram_um = '\x01';
  ram_ur = 'f';
  FUN_00110cc4(0x132);
  FUN_00110efc(0x132);
LAB_00129358:
  iVar2 = func_0xff2615cc(&DAT_003f9800,&DAT_003f9814);
  if (iVar2 != 0) {
    FUN_00110cc4(0x12f);
    FUN_00110efc(0x12f);
  }
  if (param_1 == 0x12) {
    _DAT_003f980c = (uint **)&DAT_001ce75c;
  }
  else {
    _DAT_003f980c = (uint **)&DAT_001ce734;
  }
  do {
    _DAT_003f9804 = *_DAT_003f980c;
    _DAT_003f9808 = _DAT_003f980c[1];
    if ((_DAT_003f9804 == (uint *)0x0) || (_DAT_003f9808 == (uint *)0x0)) goto LAB_00129430;
    _DAT_003f980c = _DAT_003f980c + 2;
    if (_DAT_003f9808 < _DAT_003f9804) {
      FUN_00110cc4(0x133);
      FUN_00110efc(0x133);
      goto LAB_00129430;
    }
    iVar2 = func_0xff2615cc(_DAT_003f9804,_DAT_003f9808);
  } while (iVar2 == 0);
  FUN_00110cc4(0x12e);
  FUN_00110efc(0x12e);
LAB_00129430:
  puVar3 = (uint *)&DAT_003fea30;
  _DAT_003f9808 = (uint *)&DAT_003ff10c;
  puVar9 = (undefined4 *)&DAT_003fea30;
  puVar5 = (undefined4 *)&UNK_003f9a2c;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar9;
    puVar9 = puVar9 + 1;
  } while (puVar9 < &UNK_003ff10d);
  _DAT_003f9804 = (uint *)&DAT_003fea30;
  uVar6 = 0;
  do {
    puVar1 = _DAT_003f9808;
    puVar4 = _DAT_003f9804;
    uVar8 = *(uint *)(&DAT_001ce72c + uVar6 * 4);
    for (puVar7 = _DAT_003f9804; puVar7 <= puVar1; puVar7 = puVar7 + 1) {
      uVar10 = uVar8;
      if ((((uint)puVar7 & 4) != 0) && (uVar6 == 0)) {
        uVar10 = ~uVar8;
      }
      *puVar7 = uVar10;
    }
    if (puVar4 <= puVar1) {
      do {
        uVar10 = uVar8;
        if ((((uint)puVar4 & 4) != 0) && (uVar6 == 0)) {
          uVar10 = ~uVar8;
        }
        if (*puVar4 != uVar10) {
          FUN_00110cc4(0x130);
          FUN_00110efc(0x130);
        }
        *puVar4 = ~uVar10;
        puVar4 = puVar4 + 1;
      } while (puVar4 <= _DAT_003f9808);
    }
    puVar7 = _DAT_003f9804;
    if (_DAT_003f9804 <= _DAT_003f9808) {
      do {
        uVar10 = uVar8;
        if ((((uint)puVar7 & 4) != 0) && (uVar6 == 0)) {
          uVar10 = ~uVar8;
        }
        if (*puVar7 != ~uVar10) {
          FUN_00110cc4(0x130);
          FUN_00110efc(0x130);
        }
        *puVar7 = uVar10;
        puVar7 = puVar7 + 1;
      } while (puVar7 <= _DAT_003f9808);
    }
    puVar7 = _DAT_003f9808;
    if (_DAT_003f9804 <= _DAT_003f9808) {
      do {
        uVar10 = uVar8;
        if ((((uint)puVar7 & 4) != 0) && (uVar6 == 0)) {
          uVar10 = ~uVar8;
        }
        if (*puVar7 != uVar10) {
          FUN_00110cc4(0x130);
          FUN_00110efc(0x130);
        }
        *puVar7 = ~uVar10;
        puVar7 = puVar7 + -1;
      } while (_DAT_003f9804 <= puVar7);
    }
    puVar7 = _DAT_003f9808;
    if (_DAT_003f9804 <= _DAT_003f9808) {
      do {
        uVar10 = uVar8;
        if ((((uint)puVar7 & 4) != 0) && (uVar6 == 0)) {
          uVar10 = ~uVar8;
        }
        if (*puVar7 != ~uVar10) {
          FUN_00110cc4(0x130);
          FUN_00110efc(0x130);
        }
        *puVar7 = uVar10;
        puVar7 = puVar7 + -1;
      } while (_DAT_003f9804 <= puVar7);
    }
    puVar7 = _DAT_003f9808;
    if (_DAT_003f9804 <= _DAT_003f9808) {
      do {
        uVar10 = uVar8;
        if ((((uint)puVar7 & 4) != 0) && (uVar6 == 0)) {
          uVar10 = ~uVar8;
        }
        if (*puVar7 != uVar10) {
          FUN_00110cc4(0x130);
          FUN_00110efc(0x130);
        }
        puVar7 = puVar7 + -1;
      } while (_DAT_003f9804 <= puVar7);
    }
    puVar7 = _DAT_003f9808;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 2);
  _DAT_003f9804 = (uint *)&DAT_003fea30;
  if (&UNK_003fea2f < _DAT_003f9808) {
    puVar5 = (undefined4 *)&UNK_003f9a2c;
    do {
      *puVar3 = puVar5[1];
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      _DAT_003f9804 = puVar3;
    } while (puVar3 <= puVar7);
  }
  if (((e_mem_um != '\0') || (e_ram_um != '\0')) || (param_1 != 0x93)) {
    _DAT_003f9800 = 0xf0f;
    _DAT_003f9810 = 0xf0f0;
    _DAT_003f980c = (uint **)&DAT_001ce77c;
    do {
      _DAT_003f9804 = *_DAT_003f980c;
      _DAT_003f9808 = _DAT_003f980c[1];
      if ((_DAT_003f9804 == (uint *)0x0) || (_DAT_003f9808 == (uint *)0x0)) goto LAB_001297f4;
      _DAT_003f980c = _DAT_003f980c + 2;
      if (_DAT_003f9808 < _DAT_003f9804) {
        FUN_00110cc4(0x133);
        FUN_00110efc(0x133);
        goto LAB_001297f4;
      }
      iVar2 = func_0xff2617e8(_DAT_003f9804,_DAT_003f9808);
    } while (iVar2 == 0);
    _DAT_003f9800 = _DAT_003f9800 + 1;
LAB_001297f4:
    if (_DAT_003f9800 == (ushort)~_DAT_003f9810) {
      e_ram_um = '\0';
      ram_ur = -0x67;
    }
    else {
      e_ram_um = '\x01';
      ram_ur = 'f';
      FUN_00110cc4(0x131);
      FUN_00110efc(0x131);
    }
  }
  return;
}

