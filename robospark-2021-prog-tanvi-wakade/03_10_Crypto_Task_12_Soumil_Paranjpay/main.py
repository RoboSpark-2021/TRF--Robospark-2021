from enigma.machine import EnigmaMachine

machine = EnigmaMachine.from_key_sheet(
    rotors="I II III",
    reflector="B",
    ring_settings=[1, 17, 15],
    plugboard_settings="AV BS CG DL FU HZ IN KM OW RX",
)

machine.set_display("WXC")
msg_key = machine.process_text("KCH")
machine.set_display(msg_key)
print(machine.process_text("DPIWPOLLFEUPIKAKLQLC"))
