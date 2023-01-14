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
public enum MyBitmaskEnum1 implements com.facebook.thrift.enums.BaseEnum, com.facebook.thrift.payload.ThriftSerializable {
    ONE(1),
    TWO(2),
    FOUR(4),
    UNSPECIFIED(0);

    private final int value;

    MyBitmaskEnum1(int value) {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue() {
        return value;
    }

    public static MyBitmaskEnum1 fromInteger(int n) {
        switch (n) {
        case 1:
            return ONE;
        case 2:
            return TWO;
        case 4:
            return FOUR;
        case 0:
            return UNSPECIFIED;
        default:
            return null;
        }
    }

    static {
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(new com.facebook.thrift.type.UniversalName("test.dev/fixtures/enums/MyBitmaskEnum1"), MyBitmaskEnum1.class, MyBitmaskEnum1::read0));
    }
    public static com.facebook.thrift.payload.Reader<MyBitmaskEnum1> asReader() {
        return MyBitmaskEnum1::read0;
    }

    public static MyBitmaskEnum1 read0(TProtocol iprot) throws TException {
        return MyBitmaskEnum1.fromInteger(iprot.readI32());
    }

    public void write0(TProtocol oprot) throws TException {
        oprot.writeI32(getValue());
    }


}
