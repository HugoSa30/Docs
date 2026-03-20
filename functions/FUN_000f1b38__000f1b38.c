/*
 * Program: n42.bin
 * Function: FUN_000f1b38
 * Entry: 000f1b38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1b38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  
  bVar4 = DAT_003f9a4e;
  if (DAT_003f9a4e < 3) {
    if (DAT_003f9a4e != 2) {
      lVar12 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
      if (DAT_003f9a4e == 0) goto LAB_000f26bc;
      if (DAT_003f9a4e != 1) goto LAB_000f26a4;
    }
    if (_DAT_003fa1fa < DAT_00016f58) {
      if (_DAT_003fa1fa == 0) {
        *_DAT_003fa200 = 1;
        goto LAB_000f26b4;
      }
      _DAT_003fa204 = _DAT_003fa1fa;
    }
    else {
      _DAT_003fa204 = (ushort)DAT_00016f58;
    }
    (*(code *)&SUB_00faa020)(_DAT_003fa1fc,&UNK_003fa554,_DAT_003fa1f8,0,2);
    if (bVar4 == 1) {
      DAT_003fa1f4 = '\x01';
      DAT_003fa1f5 = 0;
    }
    else {
      if (DAT_00016f52 != '\0') {
        DAT_003fa206 = 0;
      }
      DAT_003fa1f4 = '\x05';
      DAT_003fa1f5 = 4;
    }
    uVar9 = (uint)_DAT_003fa210;
    lVar12 = FUN_000fbeb0();
    DAT_003f9a4f = ' ';
    DAT_003f9a4e = 3;
    lVar12 = lVar12 + (ulonglong)((uVar9 * 1000) / 400);
  }
  else {
    if (DAT_003f9a4e == 3) {
      if (DAT_003f9a4f == ' ') {
        cVar6 = (*(code *)&SUB_00013af0)(_DAT_00016f60,1,DAT_00016f64,0x16f54,&DAT_003fa1f0);
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
        if (cVar6 != '\0') {
          cVar6 = (*(code *)&SUB_00013858)(_DAT_00016f60,&DAT_003fa1f0);
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if (cVar6 != '\0') {
            DAT_003f9a4f = '!';
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
        }
      }
      else if (DAT_003f9a4f == '!') {
        uVar9 = (*(code *)&SUB_0001411c)(_DAT_00016f60);
        DAT_003fa1f0 = (undefined)uVar9;
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
        if ((uVar9 >> 5 & 1) != 0) {
          (*(code *)&SUB_00013dbc)(_DAT_00016f60,0,DAT_00016f64,&DAT_003fa1f2,&DAT_003fa1f0);
          if ((_DAT_003fa1f2 & 1) == 0) {
            DAT_003f9a4f = '\"';
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
          else {
            DAT_003f9a4f = ' ';
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
        }
      }
      else if (DAT_003f9a4f == '\"') {
        cVar6 = (*(code *)&SUB_00013af0)(_DAT_00016f5c,1,DAT_00016f62,&UNK_003fa554,&DAT_003fa1f0);
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
        if (cVar6 != '\0') {
          cVar6 = (*(code *)&SUB_00013858)(_DAT_00016f5c,&DAT_003fa1f0);
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if (cVar6 != '\0') {
            DAT_003f9a4f = '#';
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
        }
      }
      else if (DAT_003f9a4f == '#') {
        uVar9 = (*(code *)&SUB_0001411c)(_DAT_00016f5c);
        DAT_003fa1f0 = (undefined)uVar9;
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
        if ((uVar9 >> 5 & 1) != 0) {
          (*(code *)&SUB_00013dbc)(_DAT_00016f5c,0,DAT_00016f62,&UNK_003fa554,&DAT_003fa1f0);
          uVar5 = _DAT_003fa204;
          puVar11 = _DAT_003fa1fc;
          DAT_003f9a4f = ' ';
          if (DAT_003fa1f4 == '\x01') {
            uVar9 = (uint)_DAT_003fa204;
            uVar8 = _DAT_003fa204 & 0xff;
            puVar10 = &UNK_003fa554 + DAT_00016f66;
            uVar7 = 0;
            if ((_DAT_003fa204 & 0xff) != 0) {
              puVar1 = &UNK_003fa553 + DAT_00016f66;
              puVar2 = _DAT_003fa1fc + -1;
              do {
                puVar11 = puVar2;
                puVar10 = puVar1;
                puVar1 = puVar10 + 1;
                puVar2 = puVar11 + 1;
                *puVar2 = *puVar1;
                uVar7 = uVar7 + 1 & 0xff;
              } while (uVar7 < uVar8);
              puVar11 = puVar11 + 2;
              puVar10 = puVar10 + 2;
            }
            if ((DAT_00016f53 != '\0') && (DAT_00016f58 == uVar8)) {
              puVar11[-1] = *puVar10;
            }
            _DAT_003fa1fa = _DAT_003fa1fa - uVar5;
            _DAT_003fa1f8 = _DAT_003fa1f8 + uVar5;
            _DAT_003fa1fc = _DAT_003fa1fc + uVar9;
            DAT_003f9a4e = 1;
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
          else if (DAT_003fa1f4 == '\x05') {
            uVar9 = (uint)_DAT_003fa204;
            uVar7 = _DAT_003fa204 & 0xff;
            cVar6 = (*(code *)&SUB_00fa9f40)(&UNK_003fa554 + DAT_00016f66,_DAT_003fa1fc,uVar7);
            if (cVar6 == '\0') {
              (*(code *)&SUB_00faa020)(puVar11,&UNK_003fa554,_DAT_003fa1f8,uVar7,3);
              uVar9 = (uint)_DAT_003fa210;
              lVar12 = FUN_000fbeb0();
              DAT_003f9a50 = 0x10;
              DAT_003f9a4e = 4;
              _DAT_003fa208 = lVar12 + (ulonglong)((uVar9 * 1000) / 400);
            }
            else {
              _DAT_003fa1fa = _DAT_003fa1fa - uVar5;
              _DAT_003fa1f8 = _DAT_003fa1f8 + uVar5;
              _DAT_003fa1fc = puVar11 + uVar9;
              DAT_003f9a4e = 2;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
          }
          else if (DAT_003fa1f4 == '\x06') {
            uVar9 = (uint)_DAT_003fa204;
            uVar7 = _DAT_003fa204 & 0xff;
            cVar6 = (*(code *)&SUB_00fa9f40)(&UNK_003fa554 + DAT_00016f66,_DAT_003fa1fc,uVar7);
            if (cVar6 == '\0') {
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
              if (DAT_00016f52 != '\0') {
                DAT_003fa206 = DAT_003fa206 + 1;
                if (DAT_003fa206 < 3) {
                  (*(code *)&SUB_00faa020)(puVar11,&UNK_003fa554,_DAT_003fa1f8,uVar7,3);
                  uVar9 = (uint)_DAT_003fa210;
                  lVar12 = FUN_000fbeb0();
                  DAT_003f9a50 = 0x10;
                  DAT_003f9a4e = 4;
                  _DAT_003fa208 = lVar12 + (ulonglong)((uVar9 * 1000) / 400);
                }
                else {
                  *_DAT_003fa200 = 0x83;
                  DAT_003f9a4e = 0;
                  _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
                }
              }
            }
            else {
              _DAT_003fa1fa = _DAT_003fa1fa - uVar5;
              _DAT_003fa1f8 = _DAT_003fa1f8 + uVar5;
              _DAT_003fa1fc = puVar11 + uVar9;
              DAT_003f9a4e = 2;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
          }
          else {
            *_DAT_003fa200 = 0x85;
            DAT_003f9a4e = 0;
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
        }
      }
      else {
        *_DAT_003fa200 = 0x85;
        DAT_003f9a4e = 0;
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
      }
      uVar13 = FUN_000fbeb0();
      bVar4 = DAT_003fa1f5;
      uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
      bVar3 = uVar9 < _DAT_003fa208;
      if (uVar9 == _DAT_003fa208) {
        bVar3 = (uint)uVar13 < _DAT_003fa20c;
      }
      lVar12 = _DAT_003fa208;
      if (!bVar3) {
        if (DAT_003fa1f5 == 0) {
          if (DAT_003fa212 == '\0') {
            *_DAT_003fa200 = 0x80;
            lVar12 = _DAT_003fa208;
          }
          else {
            *_DAT_003fa200 = 0x82;
            lVar12 = _DAT_003fa208;
          }
        }
        DAT_003f9a4e = bVar4;
      }
      goto LAB_000f26bc;
    }
    if (DAT_003f9a4e == 4) {
      if (DAT_003f9a50 < 0x14) {
        if (DAT_003f9a50 == 0x13) {
          uVar9 = (*(code *)&SUB_0001411c)(_DAT_00016f5e);
          DAT_003fa1f0 = (undefined)uVar9;
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if ((uVar9 >> 5 & 1) != 0) {
            cVar6 = (*(code *)&SUB_00013858)(_DAT_00016f60,&DAT_003fa1f0);
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            if (cVar6 != '\0') {
              DAT_003f9a50 = 0x14;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
          }
        }
        else if (DAT_003f9a50 == 0x10) {
          cVar6 = (*(code *)&SUB_00013af0)(_DAT_00016f60,1,DAT_00016f64,0x16f54,&DAT_003fa1f0);
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if (cVar6 != '\0') {
            cVar6 = (*(code *)&SUB_00013858)(_DAT_00016f60,&DAT_003fa1f0);
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            if (cVar6 != '\0') {
              DAT_003f9a50 = 0x11;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
          }
        }
        else if (DAT_003f9a50 == 0x11) {
          uVar9 = (*(code *)&SUB_0001411c)(_DAT_00016f60);
          DAT_003fa1f0 = (undefined)uVar9;
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if ((uVar9 >> 5 & 1) != 0) {
            (*(code *)&SUB_00013dbc)(_DAT_00016f60,0,DAT_00016f64,&DAT_003fa1f2,&DAT_003fa1f0);
            if ((_DAT_003fa1f2 & 1) == 0) {
              DAT_003f9a50 = 0x12;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
            else {
              DAT_003f9a50 = 0x10;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
          }
        }
        else {
          if (DAT_003f9a50 != 0x12) goto LAB_000f262c;
          cVar6 = (*(code *)&SUB_00013af0)(_DAT_00016f5e,1,DAT_00016f65,0x16f56,&DAT_003fa1f0);
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if (cVar6 != '\0') {
            cVar6 = (*(code *)&SUB_00013858)(_DAT_00016f5e,&DAT_003fa1f0);
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            if (cVar6 != '\0') {
              DAT_003f9a50 = 0x13;
              _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
            }
          }
        }
      }
      else if (DAT_003f9a50 == 0x14) {
        uVar9 = (*(code *)&SUB_0001411c)(_DAT_00016f60);
        DAT_003fa1f0 = (undefined)uVar9;
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
        if ((uVar9 >> 5 & 1) != 0) {
          (*(code *)&SUB_00013dbc)(_DAT_00016f60,0,DAT_00016f64,&DAT_003fa1f2,&DAT_003fa1f0);
          if ((_DAT_003fa1f2 & 2) == 0) {
            DAT_003f9a50 = 0x12;
          }
          else {
            DAT_003f9a50 = 0x15;
            _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          }
        }
      }
      else if (DAT_003f9a50 == 0x15) {
        cVar6 = (*(code *)&SUB_00013af0)(_DAT_00016f5a,1,DAT_00016f63,&UNK_003fa554,&DAT_003fa1f0);
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
        if (cVar6 != '\0') {
          cVar6 = (*(code *)&SUB_00013858)(_DAT_00016f5a,&DAT_003fa1f0);
          _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
          if (cVar6 != '\0') {
            DAT_003fa212 = '\x01';
            (*(code *)&SUB_00faa020)(_DAT_003fa1fc,&UNK_003fa554,_DAT_003fa1f8,0,2);
            uVar9 = (uint)_DAT_003fa210;
            lVar12 = FUN_000fbeb0();
            DAT_003f9a50 = 0x10;
            DAT_003fa1f4 = '\x06';
            DAT_003fa1f5 = 0;
            DAT_003f9a4e = 3;
            _DAT_003fa208 = lVar12 + (ulonglong)((uVar9 * 1000) / 400);
          }
        }
      }
      else {
LAB_000f262c:
        *_DAT_003fa200 = 0x85;
        DAT_003f9a4e = 0;
        _DAT_003fa208 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
      }
      uVar13 = FUN_000fbeb0();
      uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
      bVar3 = uVar9 < _DAT_003fa208;
      if (uVar9 == _DAT_003fa208) {
        bVar3 = (uint)uVar13 < _DAT_003fa20c;
      }
      lVar12 = _DAT_003fa208;
      if (!bVar3) {
        if (DAT_003fa212 == '\0') {
          *_DAT_003fa200 = 0x81;
        }
        else {
          *_DAT_003fa200 = 0x82;
        }
        DAT_003f9a4e = 0;
        lVar12 = _DAT_003fa208;
      }
      goto LAB_000f26bc;
    }
LAB_000f26a4:
    *_DAT_003fa200 = 0x85;
LAB_000f26b4:
    DAT_003f9a4e = 0;
    lVar12 = CONCAT44(_DAT_003fa208,_DAT_003fa20c);
  }
LAB_000f26bc:
  _DAT_003fa208 = (uint)((ulonglong)lVar12 >> 0x20);
  _DAT_003fa20c = (uint)lVar12;
  return;
}

