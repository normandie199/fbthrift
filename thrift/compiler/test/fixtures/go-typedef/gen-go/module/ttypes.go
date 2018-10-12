// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift-go"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var GoUnusedProtection__ int;

type Plate = string

func PlatePtr(v Plate) *Plate { return &v }

type State = string

func StatePtr(v State) *State { return &v }

type Year = int32

func YearPtr(v Year) *Year { return &v }

type Drivers = []string

func DriversPtr(v Drivers) *Drivers { return &v }

type Accessories = []string

func AccessoriesPtr(v Accessories) *Accessories { return &v }

type PartName = map[int32]string

func PartNamePtr(v PartName) *PartName { return &v }

type Car = Automobile

func CarPtr(v Car) *Car { return &v }

// Attributes:
//  - Plate
//  - PreviousPlate
//  - FirstPlate
//  - Year
//  - Drivers
type Automobile struct {
  Plate Plate `thrift:"plate,1" db:"plate" json:"plate"`
  PreviousPlate *Plate `thrift:"previous_plate,2" db:"previous_plate" json:"previous_plate,omitempty"`
  FirstPlate Plate `thrift:"first_plate,3" db:"first_plate" json:"first_plate,omitempty"`
  Year Year `thrift:"year,4" db:"year" json:"year"`
  Drivers Drivers `thrift:"drivers,5" db:"drivers" json:"drivers"`
}

func NewAutomobile() *Automobile {
  return &Automobile{
FirstPlate: "0000",
}
}


func (p *Automobile) GetPlate() Plate {
  return p.Plate
}
var Automobile_PreviousPlate_DEFAULT Plate
func (p *Automobile) GetPreviousPlate() Plate {
  if !p.IsSetPreviousPlate() {
    return Automobile_PreviousPlate_DEFAULT
  }
return *p.PreviousPlate
}
var Automobile_FirstPlate_DEFAULT Plate = "0000"

func (p *Automobile) GetFirstPlate() Plate {
  return p.FirstPlate
}

func (p *Automobile) GetYear() Year {
  return p.Year
}

func (p *Automobile) GetDrivers() Drivers {
  return p.Drivers
}
func (p *Automobile) IsSetPreviousPlate() bool {
  return p.PreviousPlate != nil
}

func (p *Automobile) IsSetFirstPlate() bool {
  return p.FirstPlate != Automobile_FirstPlate_DEFAULT
}

func (p *Automobile) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    case 5:
      if err := p.ReadField5(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Automobile)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  temp := Plate(v)
  p.Plate = temp
}
  return nil
}

func (p *Automobile)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  temp := Plate(v)
  p.PreviousPlate = &temp
}
  return nil
}

func (p *Automobile)  ReadField3(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 3: ", err)
} else {
  temp := Plate(v)
  p.FirstPlate = temp
}
  return nil
}

func (p *Automobile)  ReadField4(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
  return thrift.PrependError("error reading field 4: ", err)
} else {
  temp := Year(v)
  p.Year = temp
}
  return nil
}

func (p *Automobile)  ReadField5(iprot thrift.Protocol) error {
  _, size, err := iprot.ReadListBegin()
  if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
  }
  tSlice := make(Drivers, 0, size)
  p.Drivers =  tSlice
  for i := 0; i < size; i ++ {
var _elem0 string
    if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _elem0 = v
}
    p.Drivers = append(p.Drivers, _elem0)
  }
  if err := iprot.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
  }
  return nil
}

func (p *Automobile) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Automobile"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := p.writeField5(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Automobile) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:plate: ", p), err) }
  if err := oprot.WriteString(string(p.Plate)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.plate (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:plate: ", p), err) }
  return err
}

func (p *Automobile) writeField2(oprot thrift.Protocol) (err error) {
  if p.IsSetPreviousPlate() {
    if err := oprot.WriteFieldBegin("previous_plate", thrift.STRING, 2); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:previous_plate: ", p), err) }
    if err := oprot.WriteString(string(*p.PreviousPlate)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.previous_plate (2) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 2:previous_plate: ", p), err) }
  }
  return err
}

func (p *Automobile) writeField3(oprot thrift.Protocol) (err error) {
  if p.IsSetFirstPlate() {
    if err := oprot.WriteFieldBegin("first_plate", thrift.STRING, 3); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:first_plate: ", p), err) }
    if err := oprot.WriteString(string(p.FirstPlate)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.first_plate (3) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 3:first_plate: ", p), err) }
  }
  return err
}

func (p *Automobile) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("year", thrift.I32, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:year: ", p), err) }
  if err := oprot.WriteI32(int32(p.Year)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.year (4) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:year: ", p), err) }
  return err
}

func (p *Automobile) writeField5(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("drivers", thrift.LIST, 5); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 5:drivers: ", p), err) }
  if err := oprot.WriteListBegin(thrift.STRING, len(p.Drivers)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
  }
  for _, v := range p.Drivers {
    if err := oprot.WriteString(string(v)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
  }
  if err := oprot.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 5:drivers: ", p), err) }
  return err
}

func (p *Automobile) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("Automobile(%+v)", *p)
}

// Attributes:
//  - Automobile
//  - Car
type Pair struct {
  Automobile *Automobile `thrift:"automobile,1" db:"automobile" json:"automobile"`
  Car *Car `thrift:"car,2" db:"car" json:"car"`
}

func NewPair() *Pair {
  return &Pair{
Automobile: NewAutomobile(),
}
}

var Pair_Automobile_DEFAULT *Automobile
func (p *Pair) GetAutomobile() *Automobile {
  if !p.IsSetAutomobile() {
    return Pair_Automobile_DEFAULT
  }
return p.Automobile
}
var Pair_Car_DEFAULT *Car
func (p *Pair) GetCar() *Car {
  if !p.IsSetCar() {
    return Pair_Car_DEFAULT
  }
return p.Car
}
func (p *Pair) IsSetAutomobile() bool {
  return p.Automobile != nil
}

func (p *Pair) IsSetCar() bool {
  return p.Car != nil
}

func (p *Pair) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Pair)  ReadField1(iprot thrift.Protocol) error {
  p.Automobile = NewAutomobile()
  if err := p.Automobile.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.Automobile), err)
  }
  return nil
}

func (p *Pair)  ReadField2(iprot thrift.Protocol) error {
  p.Car = NewAutomobile()
  if err := p.Car.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.Car), err)
  }
  return nil
}

func (p *Pair) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Pair"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Pair) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("automobile", thrift.STRUCT, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:automobile: ", p), err) }
  if err := p.Automobile.Write(oprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.Automobile), err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:automobile: ", p), err) }
  return err
}

func (p *Pair) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("car", thrift.STRUCT, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:car: ", p), err) }
  if err := p.Car.Write(oprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.Car), err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:car: ", p), err) }
  return err
}

func (p *Pair) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("Pair(%+v)", *p)
}

// Attributes:
//  - Automobiles
//  - Cars
type Collection struct {
  Automobiles []*Automobile `thrift:"automobiles,1" db:"automobiles" json:"automobiles"`
  Cars []*Car `thrift:"cars,2" db:"cars" json:"cars"`
}

func NewCollection() *Collection {
  return &Collection{}
}


func (p *Collection) GetAutomobiles() []*Automobile {
  return p.Automobiles
}

func (p *Collection) GetCars() []*Car {
  return p.Cars
}
func (p *Collection) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Collection)  ReadField1(iprot thrift.Protocol) error {
  _, size, err := iprot.ReadListBegin()
  if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
  }
  tSlice := make([]*Automobile, 0, size)
  p.Automobiles =  tSlice
  for i := 0; i < size; i ++ {
    _elem1 := NewAutomobile()
    if err := _elem1.Read(iprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", _elem1), err)
    }
    p.Automobiles = append(p.Automobiles, _elem1)
  }
  if err := iprot.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
  }
  return nil
}

func (p *Collection)  ReadField2(iprot thrift.Protocol) error {
  _, size, err := iprot.ReadListBegin()
  if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
  }
  tSlice := make([]*Car, 0, size)
  p.Cars =  tSlice
  for i := 0; i < size; i ++ {
    _elem2 := NewAutomobile()
    if err := _elem2.Read(iprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", _elem2), err)
    }
    p.Cars = append(p.Cars, _elem2)
  }
  if err := iprot.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
  }
  return nil
}

func (p *Collection) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Collection"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Collection) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("automobiles", thrift.LIST, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:automobiles: ", p), err) }
  if err := oprot.WriteListBegin(thrift.STRUCT, len(p.Automobiles)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
  }
  for _, v := range p.Automobiles {
    if err := v.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", v), err)
    }
  }
  if err := oprot.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:automobiles: ", p), err) }
  return err
}

func (p *Collection) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("cars", thrift.LIST, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:cars: ", p), err) }
  if err := oprot.WriteListBegin(thrift.STRUCT, len(p.Cars)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
  }
  for _, v := range p.Cars {
    if err := v.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", v), err)
    }
  }
  if err := oprot.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:cars: ", p), err) }
  return err
}

func (p *Collection) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("Collection(%+v)", *p)
}
