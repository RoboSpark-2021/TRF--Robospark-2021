from enigma.machine import EnigmaMachine

# setup machine according to specs from a daily key sheet:

machine = EnigmaMachine.from_key_sheet(
       rotors='I II III',
       reflector='B',
       ring_settings=[1,11,20],
       plugboard_settings='AV BS CG DL FU HZ IN KM OW RX')

# set machine initial starting position
machine.set_display('AAA')

# decrypt the message key
msg_key = machine.process_text('AAA')

# decrypt the cipher text with the unencrypted message key
machine.set_display(msg_key)

ciphertext = 'DPIWPOLLFEUPIKAKLQLC'
plaintext = machine.process_text(ciphertext)

print(plaintext)