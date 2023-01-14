/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.enums;

import com.facebook.swift.codec.*;
import org.apache.thrift.TException;
import org.apache.thrift.protocol.TProtocol;

@SwiftGenerated
public enum MyEnum4 implements com.facebook.thrift.enums.BaseEnum, com.facebook.thrift.payload.ThriftSerializable {
    ME4_A(2147483645),
    ME4_B(2147483646),
    ME4_C(2147483647),
    ME4_D(-2147483648),
    UNSPECIFIED(0);

    private final int value;

    MyEnum4(int value) {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue() {
        return value;
    }

    public static MyEnum4 fromInteger(int n) {
        switch (n) {
        case 2147483645:
            return ME4_A;
        case 2147483646:
            return ME4_B;
        case 2147483647:
            return ME4_C;
        case -2147483648:
            return ME4_D;
        case 0:
            return UNSPECIFIED;
        default:
            return null;
        }
    }

    static {
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(new com.facebook.thrift.type.UniversalName("test.dev/fixtures/enums/MyEnum4"), MyEnum4.class, MyEnum4::read0));
    }
    public static com.facebook.thrift.payload.Reader<MyEnum4> asReader() {
        return MyEnum4::read0;
    }

    public static MyEnum4 read0(TProtocol iprot) throws TException {
        return MyEnum4.fromInteger(iprot.readI32());
    }

    public void write0(TProtocol oprot) throws TException {
        oprot.writeI32(getValue());
    }


}
