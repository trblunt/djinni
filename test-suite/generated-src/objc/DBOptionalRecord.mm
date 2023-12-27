// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#import "DBOptionalRecord.h"


@implementation DBOptionalRecord

- (nonnull instancetype)initWithOptInt:(nullable NSNumber *)optInt
                          optInterface:(nullable DBOptionalInterface *)optInterface
                             optRecord:(nullable DBBaseRecord *)optRecord
{
    if (self = [super init]) {
        _optInt = optInt;
        _optInterface = optInterface;
        _optRecord = optRecord;
    }
    return self;
}

- (nonnull instancetype)init
{
    self = [self initWithOptInt:nil
                   optInterface:nil
                      optRecord:nil];
    return self;
}

+ (nonnull instancetype)optionalRecordWithOptInt:(nullable NSNumber *)optInt
                                    optInterface:(nullable DBOptionalInterface *)optInterface
                                       optRecord:(nullable DBBaseRecord *)optRecord
{
    return [[self alloc] initWithOptInt:optInt
                           optInterface:optInterface
                              optRecord:optRecord];
}

+ (nonnull instancetype)optionalRecord
{
    return [[self alloc] init];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p optInt:%@ optInterface:%@ optRecord:%@>", self.class, (void *)self, self.optInt, self.optInterface, self.optRecord];
}

#endif
@end
